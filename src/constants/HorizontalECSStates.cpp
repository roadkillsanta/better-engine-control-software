//
// Created by kevin on 5/27/2022.
//

#include "watchdog/redlines/ValveRedline.h"
#include "watchdog/redlines/IntWithinRedline.h"
#include "HorizontalECSStates.h"

/**
 * THESE FUNCTIONS ARE NOT AUTOMATICALLY GENERATED, AVOID DELETING THEM
 *
 * Might also be bit of a premature optimization, but the space saved by only
 * allocated one selector function instead of multiple copies is like a
 * hundred kilo-bytes
 */
std::function<ECSValveState(SensorData &)> loxVentSelector = [](SensorData &data) { return data.loxVent; };
std::function<ECSValveState(SensorData &)> kerVentSelector = [](SensorData &data) { return data.kerVent; };
std::function<ECSValveState(SensorData &)> loxDripSelector = [](SensorData &data) { return data.loxDrip; };
std::function<ECSValveState(SensorData &)> kerDripSelector = [](SensorData &data) { return data.kerDrip; };
std::function<ECSValveState(SensorData &)> loxPressurantSelector = [](SensorData &data) { return data.loxPressurant; };
std::function<ECSValveState(SensorData &)> kerPressurantSelector = [](SensorData &data) { return data.kerPressurant; };
std::function<ECSValveState(SensorData &)> loxFlowSelector = [](SensorData &data) { return data.loxFlow; };
std::function<ECSValveState(SensorData &)> kerFlowSelector = [](SensorData &data) { return data.kerFlow; };
std::function<ECSValveState(SensorData &)> loxPurgeSelector = [](SensorData &data) { return data.loxPurge; };
std::function<ECSValveState(SensorData &)> kerPurgeSelector = [](SensorData &data) { return data.kerPurge; };
std::function<int(SensorData &)> loxTankDucerSelector = [](SensorData &data) { return data.loxTankDucer; };
std::function<int(SensorData &)> kerTankDucerSelector = [](SensorData &data) { return data.kerTankDucer; };
std::function<int(SensorData &)> purgeDucerSelector = [](SensorData &data) { return data.purgeDucer; };
std::function<int(SensorData &)> loxInletDucerSelector = [](SensorData &data) { return data.loxInletDucer; };
std::function<int(SensorData &)> kerInletDucerSelector = [](SensorData &data) { return data.kerInletDucer; };
std::function<int(SensorData &)> kerPintleDucerSelector = [](SensorData &data) { return data.kerPintleDucer; };
std::function<int(SensorData &)> loxVenturiSelector = [](SensorData &data) { return data.loxVenturi; };
std::function<int(SensorData &)> kerVenturiSelector = [](SensorData &data) { return data.kerVenturi; };
std::function<int(SensorData &)> loadCellSelector = [](SensorData &data) { return data.loadCell; };
std::function<int(SensorData &)> loxTank1Selector = [](SensorData &data) { return data.loxTank1; };
std::function<int(SensorData &)> loxTank2Selector = [](SensorData &data) { return data.loxTank2; };
std::function<int(SensorData &)> loxTank3Selector = [](SensorData &data) { return data.loxTank3; };
std::function<int(SensorData &)> loxDripLineSelector = [](SensorData &data) { return data.loxDripLine; };
std::function<int(SensorData &)> outsideThroatSelector = [](SensorData &data) { return data.outsideThroat; };
std::function<int(SensorData &)> nozzleSelector = [](SensorData &data) { return data.nozzle; };

/**
 * EVERYTHING BELOW IS GENERATED BY A SCRIPT, ANY TWEAKS HERE WILL BE REPLACED EVENTUALLY
 */
 //generate redline lists separated, but in an anonymous namespace to avoid collisions
namespace {
    std::vector<IRedline *> ONLINE_SAFE_D_REDLINES = {
            new ValveRedline("loxVent in ONLINE_SAFE_D", loxVentSelector, ECSValveState::OPEN),
            new ValveRedline("kerVent in ONLINE_SAFE_D", kerVentSelector, ECSValveState::OPEN),
            new ValveRedline("loxDrip in ONLINE_SAFE_D", loxDripSelector, ECSValveState::OPEN),
            new ValveRedline("kerDrip in ONLINE_SAFE_D", kerDripSelector, ECSValveState::OPEN),
            new ValveRedline("loxPressurant in ONLINE_SAFE_D", loxPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPressurant in ONLINE_SAFE_D", kerPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("loxFlow in ONLINE_SAFE_D", loxFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("kerFlow in ONLINE_SAFE_D", kerFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPurge in ONLINE_SAFE_D", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in ONLINE_SAFE_D", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("loxTankDucer in ONLINE_SAFE_D", loxTankDucerSelector, 0, 15),
            new IntWithinRedline("kerTankDucer in ONLINE_SAFE_D", kerTankDucerSelector, 0, 15),
            new IntWithinRedline("purgeDucer in ONLINE_SAFE_D", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in ONLINE_SAFE_D", loxInletDucerSelector, 0, 15),
            new IntWithinRedline("kerInletDucer in ONLINE_SAFE_D", kerInletDucerSelector, 0, 15),
            new IntWithinRedline("kerPintleDucer in ONLINE_SAFE_D", kerPintleDucerSelector, 0, 15),
            new IntWithinRedline("loxVenturi in ONLINE_SAFE_D", loxVenturiSelector, 0, 15),
            new IntWithinRedline("kerVenturi in ONLINE_SAFE_D", kerVenturiSelector, 0, 15),
            new IntWithinRedline("loxTank1 in ONLINE_SAFE_D", loxTank1Selector, 20, 30),
            new IntWithinRedline("loxTank2 in ONLINE_SAFE_D", loxTank2Selector, 20, 30),
            new IntWithinRedline("loxTank3 in ONLINE_SAFE_D", loxTank3Selector, 20, 30),
            new IntWithinRedline("loxDripLine in ONLINE_SAFE_D", loxDripLineSelector, 20, 30),
            new IntWithinRedline("outsideThroat in ONLINE_SAFE_D", outsideThroatSelector, 20, 30)};
    std::vector<IRedline *> KERO_FILL_REDLINES = {
            new ValveRedline("loxVent in KERO_FILL", loxVentSelector, ECSValveState::OPEN),
            new ValveRedline("kerVent in KERO_FILL", kerVentSelector, ECSValveState::OPEN),
            new ValveRedline("loxDrip in KERO_FILL", loxDripSelector, ECSValveState::OPEN),
            new ValveRedline("kerDrip in KERO_FILL", kerDripSelector, ECSValveState::OPEN),
            new ValveRedline("loxPressurant in KERO_FILL", loxPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPressurant in KERO_FILL", kerPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("loxFlow in KERO_FILL", loxFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("kerFlow in KERO_FILL", kerFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPurge in KERO_FILL", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in KERO_FILL", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("loxTankDucer in KERO_FILL", loxTankDucerSelector, 0, 15),
            new IntWithinRedline("kerTankDucer in KERO_FILL", kerTankDucerSelector, 0, 15),
            new IntWithinRedline("purgeDucer in KERO_FILL", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in KERO_FILL", loxInletDucerSelector, 0, 15),
            new IntWithinRedline("kerInletDucer in KERO_FILL", kerInletDucerSelector, 0, 15),
            new IntWithinRedline("kerPintleDucer in KERO_FILL", kerPintleDucerSelector, 0, 15),
            new IntWithinRedline("loxVenturi in KERO_FILL", loxVenturiSelector, 0, 15),
            new IntWithinRedline("kerVenturi in KERO_FILL", kerVenturiSelector, 0, 50)};
    std::vector<IRedline *> KERO_FILLED_REDLINES = {
            new ValveRedline("loxVent in KERO_FILLED", loxVentSelector, ECSValveState::OPEN),
            new ValveRedline("kerVent in KERO_FILLED", kerVentSelector, ECSValveState::OPEN),
            new ValveRedline("loxDrip in KERO_FILLED", loxDripSelector, ECSValveState::OPEN),
            new ValveRedline("kerDrip in KERO_FILLED", kerDripSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPressurant in KERO_FILLED", loxPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPressurant in KERO_FILLED", kerPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("loxFlow in KERO_FILLED", loxFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("kerFlow in KERO_FILLED", kerFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPurge in KERO_FILLED", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in KERO_FILLED", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("loxTankDucer in KERO_FILLED", loxTankDucerSelector, 0, 15),
            new IntWithinRedline("kerTankDucer in KERO_FILLED", kerTankDucerSelector, 0, 15),
            new IntWithinRedline("purgeDucer in KERO_FILLED", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in KERO_FILLED", loxInletDucerSelector, 0, 15),
            new IntWithinRedline("kerInletDucer in KERO_FILLED", kerInletDucerSelector, 0, 15),
            new IntWithinRedline("kerPintleDucer in KERO_FILLED", kerPintleDucerSelector, 0, 15),
            new IntWithinRedline("loxVenturi in KERO_FILLED", loxVenturiSelector, 0, 15),
            new IntWithinRedline("kerVenturi in KERO_FILLED", kerVenturiSelector, 0, 15)};
    std::vector<IRedline *> LOX_FILL_REDLINES = {
            new ValveRedline("loxVent in LOX_FILL", loxVentSelector, ECSValveState::OPEN),
            new ValveRedline("kerVent in LOX_FILL", kerVentSelector, ECSValveState::OPEN),
            new ValveRedline("loxDrip in LOX_FILL", loxDripSelector, ECSValveState::OPEN),
            new ValveRedline("kerDrip in LOX_FILL", kerDripSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPressurant in LOX_FILL", loxPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPressurant in LOX_FILL", kerPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("loxFlow in LOX_FILL", loxFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("kerFlow in LOX_FILL", kerFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPurge in LOX_FILL", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in LOX_FILL", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("loxTankDucer in LOX_FILL", loxTankDucerSelector, 0, 15),
            new IntWithinRedline("kerTankDucer in LOX_FILL", kerTankDucerSelector, 0, 15),
            new IntWithinRedline("purgeDucer in LOX_FILL", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in LOX_FILL", loxInletDucerSelector, 0, 15),
            new IntWithinRedline("kerInletDucer in LOX_FILL", kerInletDucerSelector, 0, 15),
            new IntWithinRedline("kerPintleDucer in LOX_FILL", kerPintleDucerSelector, 0, 15),
            new IntWithinRedline("loxVenturi in LOX_FILL", loxVenturiSelector, 0, 50),
            new IntWithinRedline("kerVenturi in LOX_FILL", kerVenturiSelector, 0, 15)};
    std::vector<IRedline *> LOX_FILLED_REDLINES = {
            new ValveRedline("loxVent in LOX_FILLED", loxVentSelector, ECSValveState::OPEN),
            new ValveRedline("kerVent in LOX_FILLED", kerVentSelector, ECSValveState::OPEN),
            new ValveRedline("loxDrip in LOX_FILLED", loxDripSelector, ECSValveState::CLOSED),
            new ValveRedline("kerDrip in LOX_FILLED", kerDripSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPressurant in LOX_FILLED", loxPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPressurant in LOX_FILLED", kerPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("loxFlow in LOX_FILLED", loxFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("kerFlow in LOX_FILLED", kerFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPurge in LOX_FILLED", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in LOX_FILLED", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("loxTankDucer in LOX_FILLED", loxTankDucerSelector, 0, 15),
            new IntWithinRedline("kerTankDucer in LOX_FILLED", kerTankDucerSelector, 0, 15),
            new IntWithinRedline("purgeDucer in LOX_FILLED", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in LOX_FILLED", loxInletDucerSelector, 0, 15),
            new IntWithinRedline("kerInletDucer in LOX_FILLED", kerInletDucerSelector, 0, 15),
            new IntWithinRedline("kerPintleDucer in LOX_FILLED", kerPintleDucerSelector, 0, 15),
            new IntWithinRedline("loxVenturi in LOX_FILLED", loxVenturiSelector, 0, 15),
            new IntWithinRedline("kerVenturi in LOX_FILLED", kerVenturiSelector, 0, 15)};
    std::vector<IRedline *> ONLINE_SAFE_REDLINES = {
            new ValveRedline("loxVent in ONLINE_SAFE", loxVentSelector, ECSValveState::OPEN),
            new ValveRedline("kerVent in ONLINE_SAFE", kerVentSelector, ECSValveState::OPEN),
            new ValveRedline("loxDrip in ONLINE_SAFE", loxDripSelector, ECSValveState::CLOSED),
            new ValveRedline("kerDrip in ONLINE_SAFE", kerDripSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPressurant in ONLINE_SAFE", loxPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPressurant in ONLINE_SAFE", kerPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("loxFlow in ONLINE_SAFE", loxFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("kerFlow in ONLINE_SAFE", kerFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPurge in ONLINE_SAFE", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in ONLINE_SAFE", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("loxTankDucer in ONLINE_SAFE", loxTankDucerSelector, 0, 15),
            new IntWithinRedline("kerTankDucer in ONLINE_SAFE", kerTankDucerSelector, 0, 15),
            new IntWithinRedline("purgeDucer in ONLINE_SAFE", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in ONLINE_SAFE", loxInletDucerSelector, 0, 15),
            new IntWithinRedline("kerInletDucer in ONLINE_SAFE", kerInletDucerSelector, 0, 15),
            new IntWithinRedline("kerPintleDucer in ONLINE_SAFE", kerPintleDucerSelector, 0, 15),
            new IntWithinRedline("loxVenturi in ONLINE_SAFE", loxVenturiSelector, 0, 15),
            new IntWithinRedline("kerVenturi in ONLINE_SAFE", kerVenturiSelector, 0, 15)};
    std::vector<IRedline *> READY_TO_PRESSURIZE_REDLINES = {
            new ValveRedline("loxVent in READY_TO_PRESSURIZE", loxVentSelector, ECSValveState::CLOSED),
            new ValveRedline("kerVent in READY_TO_PRESSURIZE", kerVentSelector, ECSValveState::CLOSED),
            new ValveRedline("loxDrip in READY_TO_PRESSURIZE", loxDripSelector, ECSValveState::CLOSED),
            new ValveRedline("kerDrip in READY_TO_PRESSURIZE", kerDripSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPressurant in READY_TO_PRESSURIZE", loxPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPressurant in READY_TO_PRESSURIZE", kerPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("loxFlow in READY_TO_PRESSURIZE", loxFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("kerFlow in READY_TO_PRESSURIZE", kerFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPurge in READY_TO_PRESSURIZE", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in READY_TO_PRESSURIZE", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("loxTankDucer in READY_TO_PRESSURIZE", loxTankDucerSelector, 0, 200),
            new IntWithinRedline("kerTankDucer in READY_TO_PRESSURIZE", kerTankDucerSelector, 0, 15),
            new IntWithinRedline("purgeDucer in READY_TO_PRESSURIZE", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in READY_TO_PRESSURIZE", loxInletDucerSelector, 0, 15),
            new IntWithinRedline("kerInletDucer in READY_TO_PRESSURIZE", kerInletDucerSelector, 0, 15),
            new IntWithinRedline("kerPintleDucer in READY_TO_PRESSURIZE", kerPintleDucerSelector, 0, 15),
            new IntWithinRedline("loxVenturi in READY_TO_PRESSURIZE", loxVenturiSelector, 0, 15),
            new IntWithinRedline("kerVenturi in READY_TO_PRESSURIZE", kerVenturiSelector, 0, 15)};
    std::vector<IRedline *> PRESSURIZING_REDLINES = {
            new ValveRedline("loxVent in PRESSURIZING", loxVentSelector, ECSValveState::CLOSED),
            new ValveRedline("kerVent in PRESSURIZING", kerVentSelector, ECSValveState::CLOSED),
            new ValveRedline("loxDrip in PRESSURIZING", loxDripSelector, ECSValveState::CLOSED),
            new ValveRedline("kerDrip in PRESSURIZING", kerDripSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPressurant in PRESSURIZING", loxPressurantSelector, ECSValveState::OPEN),
            new ValveRedline("kerPressurant in PRESSURIZING", kerPressurantSelector, ECSValveState::OPEN),
            new ValveRedline("loxFlow in PRESSURIZING", loxFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("kerFlow in PRESSURIZING", kerFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPurge in PRESSURIZING", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in PRESSURIZING", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("purgeDucer in PRESSURIZING", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in PRESSURIZING", loxInletDucerSelector, 0, 15),
            new IntWithinRedline("kerInletDucer in PRESSURIZING", kerInletDucerSelector, 0, 15),
            new IntWithinRedline("kerPintleDucer in PRESSURIZING", kerPintleDucerSelector, 0, 15),
            new IntWithinRedline("loxVenturi in PRESSURIZING", loxVenturiSelector, 0, 15),
            new IntWithinRedline("kerVenturi in PRESSURIZING", kerVenturiSelector, 0, 15)};
    std::vector<IRedline *> FIRE_REDLINES = {
            new ValveRedline("loxVent in FIRE", loxVentSelector, ECSValveState::CLOSED),
            new ValveRedline("kerVent in FIRE", kerVentSelector, ECSValveState::CLOSED),
            new ValveRedline("loxDrip in FIRE", loxDripSelector, ECSValveState::CLOSED),
            new ValveRedline("kerDrip in FIRE", kerDripSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPressurant in FIRE", loxPressurantSelector,
                             ECSValveState::OPEN),
            new ValveRedline("kerPressurant in FIRE", kerPressurantSelector,
                             ECSValveState::OPEN),
            new ValveRedline("loxFlow in FIRE", loxFlowSelector, ECSValveState::OPEN),
            new ValveRedline("kerFlow in FIRE", kerFlowSelector, ECSValveState::OPEN),
            new ValveRedline("loxPurge in FIRE", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in FIRE", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("loadCell in FIRE", loadCellSelector, 0, 1000)};
    std::vector<IRedline *> ENGINE_PURGE_REDLINES = {
            new ValveRedline("loxVent in ENGINE_PURGE", loxVentSelector, ECSValveState::CLOSED),
            new ValveRedline("kerVent in ENGINE_PURGE", kerVentSelector, ECSValveState::CLOSED),
            new ValveRedline("loxDrip in ENGINE_PURGE", loxDripSelector, ECSValveState::CLOSED),
            new ValveRedline("kerDrip in ENGINE_PURGE", kerDripSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPressurant in ENGINE_PURGE", loxPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPressurant in ENGINE_PURGE", kerPressurantSelector, ECSValveState::CLOSED),
            new ValveRedline("loxFlow in ENGINE_PURGE", loxFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("kerFlow in ENGINE_PURGE", kerFlowSelector, ECSValveState::CLOSED),
            new ValveRedline("loxPurge in ENGINE_PURGE", loxPurgeSelector, ECSValveState::OPEN),
            new ValveRedline("kerPurge in ENGINE_PURGE", kerPurgeSelector, ECSValveState::OPEN),
            new IntWithinRedline("loxTankDucer in ENGINE_PURGE", loxTankDucerSelector, 0, 15),
            new IntWithinRedline("kerTankDucer in ENGINE_PURGE", kerTankDucerSelector, 0, 15),
            new IntWithinRedline("purgeDucer in ENGINE_PURGE", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in ENGINE_PURGE", loxInletDucerSelector, 0, 100),
            new IntWithinRedline("kerInletDucer in ENGINE_PURGE", kerInletDucerSelector, 0, 200),
            new IntWithinRedline("kerPintleDucer in ENGINE_PURGE", kerPintleDucerSelector, 0, 100)};
    std::vector<IRedline *> TANK_PURGE_REDLINES = {
            new ValveRedline("loxVent in TANK_PURGE", loxVentSelector, ECSValveState::OPEN),
            new ValveRedline("kerVent in TANK_PURGE", kerVentSelector, ECSValveState::OPEN),
            new ValveRedline("loxDrip in TANK_PURGE", loxDripSelector, ECSValveState::OPEN),
            new ValveRedline("kerDrip in TANK_PURGE", kerDripSelector, ECSValveState::OPEN),
            new ValveRedline("loxPressurant in TANK_PURGE", loxPressurantSelector, ECSValveState::OPEN),
            new ValveRedline("kerPressurant in TANK_PURGE", kerPressurantSelector, ECSValveState::OPEN),
            new ValveRedline("loxFlow in TANK_PURGE", loxFlowSelector, ECSValveState::OPEN),
            new ValveRedline("kerFlow in TANK_PURGE", kerFlowSelector, ECSValveState::OPEN),
            new ValveRedline("loxPurge in TANK_PURGE", loxPurgeSelector, ECSValveState::CLOSED),
            new ValveRedline("kerPurge in TANK_PURGE", kerPurgeSelector, ECSValveState::CLOSED),
            new IntWithinRedline("loxTankDucer in TANK_PURGE", loxTankDucerSelector, 0, 50),
            new IntWithinRedline("kerTankDucer in TANK_PURGE", kerTankDucerSelector, 0, 50),
            new IntWithinRedline("purgeDucer in TANK_PURGE", purgeDucerSelector, 0, 500),
            new IntWithinRedline("loxInletDucer in TANK_PURGE", loxInletDucerSelector, 0, 100),
            new IntWithinRedline("kerInletDucer in TANK_PURGE", kerInletDucerSelector, 0, 200),
            new IntWithinRedline("kerPintleDucer in TANK_PURGE", kerPintleDucerSelector, 0, 100)};
}

//extern ECSState ONLINE_SAFE_D("ONLINE_SAFE_D",
//                              ONLINE_SAFE_D_REDLINES,
//                              CommandData{},
//                              ONLINE_SAFE_D);

extern ECSState ONLINE_SAFE_D = ECSState("ONLINE_SAFE_D", ONLINE_SAFE_D_REDLINES, CommandData(ECSValveState::OPEN,
                                                                                              ECSValveState::OPEN,
                                                                                              ECSValveState::OPEN,
                                                                                              ECSValveState::OPEN,
                                                                                              ECSValveState::CLOSED,
                                                                                              ECSValveState::CLOSED,
                                                                                              ECSValveState::CLOSED,
                                                                                              ECSValveState::CLOSED,
                                                                                              ECSValveState::CLOSED,
                                                                                              ECSValveState::CLOSED),
                                         ONLINE_SAFE);
extern ECSState KERO_FILL = ECSState("KERO_FILL", KERO_FILL_REDLINES, CommandData(ECSValveState::OPEN,
                                                                                  ECSValveState::OPEN,
                                                                                  ECSValveState::OPEN,
                                                                                  ECSValveState::OPEN,
                                                                                  ECSValveState::CLOSED,
                                                                                  ECSValveState::CLOSED,
                                                                                  ECSValveState::CLOSED,
                                                                                  ECSValveState::CLOSED,
                                                                                  ECSValveState::CLOSED,
                                                                                  ECSValveState::CLOSED), ONLINE_SAFE);
extern ECSState KERO_FILLED = ECSState("KERO_FILLED", KERO_FILLED_REDLINES, CommandData(ECSValveState::OPEN,
                                                                                        ECSValveState::OPEN,
                                                                                        ECSValveState::OPEN,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED),
                                       ONLINE_SAFE);
extern ECSState LOX_FILL = ECSState("LOX_FILL", LOX_FILL_REDLINES, CommandData(ECSValveState::OPEN,
                                                                               ECSValveState::OPEN,
                                                                               ECSValveState::OPEN,
                                                                               ECSValveState::CLOSED,
                                                                               ECSValveState::CLOSED,
                                                                               ECSValveState::CLOSED,
                                                                               ECSValveState::CLOSED,
                                                                               ECSValveState::CLOSED,
                                                                               ECSValveState::CLOSED,
                                                                               ECSValveState::CLOSED), ONLINE_SAFE);
extern ECSState LOX_FILLED = ECSState("LOX_FILLED", LOX_FILLED_REDLINES, CommandData(ECSValveState::OPEN,
                                                                                     ECSValveState::OPEN,
                                                                                     ECSValveState::CLOSED,
                                                                                     ECSValveState::CLOSED,
                                                                                     ECSValveState::CLOSED,
                                                                                     ECSValveState::CLOSED,
                                                                                     ECSValveState::CLOSED,
                                                                                     ECSValveState::CLOSED,
                                                                                     ECSValveState::CLOSED,
                                                                                     ECSValveState::CLOSED),
                                      ONLINE_SAFE);
extern ECSState ONLINE_SAFE = ECSState("ONLINE_SAFE", ONLINE_SAFE_REDLINES, CommandData(ECSValveState::OPEN,
                                                                                        ECSValveState::OPEN,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED,
                                                                                        ECSValveState::CLOSED),
                                       ONLINE_SAFE);
extern ECSState READY_TO_PRESSURIZE = ECSState("READY_TO_PRESSURIZE", READY_TO_PRESSURIZE_REDLINES,
                                               CommandData(ECSValveState::CLOSED,
                                                           ECSValveState::CLOSED,
                                                           ECSValveState::CLOSED,
                                                           ECSValveState::CLOSED,
                                                           ECSValveState::CLOSED,
                                                           ECSValveState::CLOSED,
                                                           ECSValveState::CLOSED,
                                                           ECSValveState::CLOSED,
                                                           ECSValveState::CLOSED,
                                                           ECSValveState::CLOSED), ONLINE_SAFE);
extern ECSState PRESSURIZING = ECSState("PRESSURIZING", PRESSURIZING_REDLINES, CommandData(ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::OPEN,
                                                                                           ECSValveState::OPEN,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED),
                                        ONLINE_SAFE);
extern ECSState FIRE = ECSState("FIRE", FIRE_REDLINES, CommandData(ECSValveState::CLOSED,
                                                                   ECSValveState::CLOSED,
                                                                   ECSValveState::CLOSED,
                                                                   ECSValveState::CLOSED,
                                                                   ECSValveState::OPEN,
                                                                   ECSValveState::OPEN,
                                                                   ECSValveState::OPEN,
                                                                   ECSValveState::OPEN,
                                                                   ECSValveState::CLOSED,
                                                                   ECSValveState::CLOSED), ONLINE_SAFE);
extern ECSState ENGINE_PURGE = ECSState("ENGINE_PURGE", ENGINE_PURGE_REDLINES, CommandData(ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::CLOSED,
                                                                                           ECSValveState::OPEN,
                                                                                           ECSValveState::OPEN),
                                        ONLINE_SAFE);
extern ECSState TANK_PURGE = ECSState("TANK_PURGE", TANK_PURGE_REDLINES, CommandData(ECSValveState::OPEN,
                                                                                     ECSValveState::OPEN,
                                                                                     ECSValveState::OPEN,
                                                                                     ECSValveState::OPEN,
                                                                                     ECSValveState::OPEN,
                                                                                     ECSValveState::OPEN,
                                                                                     ECSValveState::OPEN,
                                                                                     ECSValveState::OPEN,
                                                                                     ECSValveState::CLOSED,
                                                                                     ECSValveState::CLOSED),
                                      ONLINE_SAFE);