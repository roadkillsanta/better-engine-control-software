#ifndef BETTER_ENGINE_CONTROL_SOFTWARE_FAKEBOUNDARY_H
#define BETTER_ENGINE_CONTROL_SOFTWARE_FAKEBOUNDARY_H

#include "IPhysicalBoundary.h"

/**
 * Boundary used in the sim. Can also be used for unit testing
 *
 * Will report random sensor readings, but should apply actual commands
 * correctly
 */
class FakeBoundary : public IPhysicalBoundary{
public:
    FakeBoundary();
    SensorData readFromBoundary() override;
    void writeToBoundary(CommandData& data) override;
private:
    int generateRandom(int lowerBound, int upperBound);
    SensorData curData;
};


#endif //BETTER_ENGINE_CONTROL_SOFTWARE_FAKEBOUNDARY_H
