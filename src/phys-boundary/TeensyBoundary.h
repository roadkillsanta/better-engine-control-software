//
// Created by kevin on 6/17/2022.
//

#ifndef BETTER_ENGINE_CONTROL_SOFTWARE_TEENSYBOUNDARY_H
#define BETTER_ENGINE_CONTROL_SOFTWARE_TEENSYBOUNDARY_H

#include "IPhysicalBoundary.h"

#include "valves/IECSValve.h"
#include "packet-sources/PropBoardSource.h"
#include "calibrators/SensorDataCalibrator.h"

#include "phys-boundary/packet-sources/PiUtils.h"
#include <vector>

/**
 * Implementation of IPhysicalBoundary for getting and sending data to horizontal
 * test stand.
 *
 * Sensor readings are passed to this IPhysicalBoundary by the Teensy Arduino and other boards,
 * requiring us to read data from a serial port. Effector readings and commands are handled
 * directly.
 */
class TeensyBoundary: public IPhysicalBoundary{
public:
    explicit TeensyBoundary(PropBoardSource propSrc,
                   std::vector<SensorDataCalibrator> calibratorList = {});


    TeensyBoundary(const TeensyBoundary& other) = delete;
    TeensyBoundary(TeensyBoundary&& other) = default;

    TeensyBoundary& operator=(const TeensyBoundary& other) = delete;
    TeensyBoundary& operator=(TeensyBoundary&& other) = default;

    /**
     * Destructor for boundary
     *
     * Right now, it will infinitely hang due to the two packet sources destructors
     * hanging.
     *
     * It would be cool to fix it, but since we never destruct the boundary anyways
     * it isn't urgent
     */
    ~TeensyBoundary() override = default;

    /**
     * Returns the latest stored sensor data.
     * Reads the latest info from the packet sources and effectors
     *
     * Mutates stored field
     *
     * @return a new SensorData object
     */
    SensorData readFromBoundary() override;
    void writeToBoundary(CommandData& data) override;

private:
    /**
     * Updates the storedState field with newest data from effectors
     * Effectors are read directly, not through data packet transmission
     */
    void readFromEffectors();

    IECSValve* loxPressurant;
    IECSValve* kerPressurant;
    IECSValve* loxPurge;
    IECSValve* kerPurge;
    IECSValve* loxVent;
    IECSValve* kerVent;
    IECSValve* loxFlow;
    IECSValve* kerFlow;
    IECSValve* loxDrip;
    IECSValve* kerDrip;

    std::vector<SensorDataCalibrator> calibratorList;

    SensorData storedData;

    PropBoardSource propSource;
};
#endif //BETTER_ENGINE_CONTROL_SOFTWARE_TEENSYBOUNDARY_H
