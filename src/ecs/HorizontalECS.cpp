//
// Created by kevin on 5/23/2022.
//

#include "HorizontalECS.h"


HorizontalECS::HorizontalECS(ICommBoundary *net, IPhysicalBoundary* bound, std::queue<CommandData *> comQueue,
                             WatchDog *wDog, Sequencer *seq, ECSState* curState, ECSState* uniSafe) :
        networker(net),
        boundary(bound),
        commandQueue(comQueue),
        watchDog(wDog),
        sequencer(seq),
        currentState(curState),
        universalSafe(uniSafe) {}

/*
HorizontalECS::HorizontalECS(ICommBoundary *net, IPhysicalBoundary *bound, WatchDog *wDog):
        HorizontalECS(net, bound, std::queue<CommandData *>(), wDog, new Sequencer(getTimeStamp()),
                      ECSState::UNKNOWN, ECSState::ONLINE_SAFE)
{}*/

void HorizontalECS::stepECS() {
    SensorData curData = this->boundary->readFromBoundary();

    for(std::tuple<ECSRedLineResponse, IRedline*> failedRedlinePair: this->watchDog->stepRedlines(&curData)){
        ECSRedLineResponse failedResponse = std::get<0>(failedRedlinePair);
        IRedline* failedRedline = std::get<1>(failedRedlinePair);

        //failedRedline->response;
        //failedRedline->errorMessage(curData);
        //TODO: process each failed redline in some way
    }

    if(!this->underAutoControl()){
        while(!this->commandQueue.empty()){
            this->boundary->writeToBoundary(*this->commandQueue.front());
            this->commandQueue.pop();
        }
    }
    else{
        ECSState* nextMove = this->sequencer->stepSequence(getTimeStamp());
        if(nextMove){
            //TODO: turn ECSState in command data and write to CommBoundary
        }
    }

    //TODO: parse another message back?
}

void HorizontalECS::acceptStateTransition(ECSState& newState) {
    //TODO actually implement
    //also have to switch redlines
}

void HorizontalECS::acceptCommand(CommandData commands) {
    // this->acceptECSStateandCommand(ECSState::UNKNOWN, commands);
    //idk shit about redlines
}

void HorizontalECS::acceptECSStateandCommand(ECSState& newState, CommandData *commands) {
    this->currentState = &newState;
    this->commandQueue.push(commands);
}


bool HorizontalECS::underAutoControl() {
    return this->sequencer->sequenceRunning();
}

void HorizontalECS::abort() {
    //TODO: kill sequence
    //TODO: turn universalSafe in command data and write to CommBoundary
    //send abort messages
}

void HorizontalECS::acceptSequence(ISequence *seq) {
    //TODO: lmao
}

