/**
* This file is the main file for building a complete ecs on the Raspberry Pi
*/
#include <iostream>
#include "ecs/HorizontalECS.h"
#include "comm-boundary/ECSNetworker.h"
#include "phys-boundary/TeensyBoundary.h"
#include "sequencer/Sequencer.h"
#include "watchdog/WatchDog.h"
#include "utils-and-constants/HorizontalECSStates.h"

#include <chrono>
#include <thread>


void run_ecs_forever(HorizontalECS* ecs){
    //DO NOT CHANGE IT TO PASS BY REFERENCE, it breaks
    while(true){
        ecs->stepECS();

        std::this_thread::sleep_for((std::chrono::milliseconds(50)));
    }
}

void run_comm_forever(ECSNetworker* comm){
    //DO NOT CHANGE IT TO PASS BY REFERENCE, it breaks
    while(true){
        comm->run();
    }
}

int main(){
    ECSNetworker networker;

    std::string adcBoardLoc("/dev/serial/by-id/usb-FTDI_FT230X_Basic_UART_D307YX5J-if00-port0");
    std::string teensyBoardLoc("/dev/serial/by-id/usb-Teensyduino_USB_Serial_7662480-if00");

    TeensyBoundary boundary(adcBoardLoc, teensyBoardLoc);

    WatchDog watchDog;

    Sequencer sequencer;

    HorizontalECS ecs(networker, boundary, watchDog, sequencer, ONLINE_SAFE_D, ONLINE_SAFE_D);

    networker.acceptECS(ecs);

    std::cout << "------------------------------------" << std::endl;
    std::cout << "Engine Control Software Version 1.0" << std::endl;
    std::cout << "PI | WILL CONTROL STAND AND REPORT DATA FROM STAND" << std::endl;
    std::cout << "####" << std::endl;
    std::cout << "BE SAFE | BE SMART" << std::endl;
    std::cout << "FOLLOW ALL GUIDELINES IN STANDARD OPERATING PROCEDURES" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    std::thread ecs_thread(run_ecs_forever, &ecs);
    std::thread networker_thread(run_comm_forever, &networker);

    ecs_thread.join();
    networker_thread.join();
}