#ifndef BETTER_ENGINE_CONTROL_SOFTWARE_SENSORDATA_H
#define BETTER_ENGINE_CONTROL_SOFTWARE_SENSORDATA_H

#include "ECSUtils.h"
#include <array>
#include "CommandData.h"

/**
 * Class that contains a field for each sensor and readable effector with their data
 */
struct SensorData: public CommandData{
    //CONTAINS VALVES FROM CommandData STRUCT

     //PRESSURE SENSORS (psi)
    int loxTankDucer = 0; // ADC 11
    int kerTankDucer = 0; //ADC 8
    int purgeDucer = 0; // ADC 6
    int loxInletDucer = 0; // ADC 4
    int kerInletDucer = 0; // ADC 5
    int kerPintleDucer = 0; // ADC 7
    int loxVenturi = 0; // ADC 2
    int kerVenturi = 0; // ADC 3

    int pnematicsDucer = 0; // ADC 10
    // unused adcs: lox reg (0), kero reg (1), do not use (9)

    //LOADCELL (lbf)
    int loadCell = 0; // direct field on packet

    //TEMP SENSORS (C)
    // not currently being measuring properly, ignore
    int loxTank1 = 0;
    int loxTank2 = 0;
    int loxTank3 = 0;
    int loxDripLine = 0;
    int outsideThroat = 0;
    int nozzle = 0;
};


#endif //BETTER_ENGINE_CONTROL_SOFTWARE_SENSORDATA_H