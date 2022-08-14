#ifndef BETTER_ENGINE_CONTROL_SOFTWARE_INTWITHINREDLINE_H
#define BETTER_ENGINE_CONTROL_SOFTWARE_INTWITHINREDLINE_H

#include "IRedline.h"
#include <functional>

/**
 * class to represent IRedline that checks for expected int value within a range
 */
class IntWithinRedline: public IRedline{
public:
    IntWithinRedline(std::string n, std::function<int(SensorData&)>& sFunct, int lBound, int uBound,
                     ECSRedLineResponse r = ECSRedLineResponse::WARN);

    /**
     * tests to make sure if passed sensor data falls into expected value
     * bounds are INCLUSIVE
     * @param data reference to sensor data object to read value from
     * @return true if within bounds, false otherwise
     */
    ECSRedLineResponse testCondition(SensorData& data) override;

    /**
     * creates a formatted error message string
     * @param data reference to sensor data object to read value from
     * @return string, containing IRedline name, expected value(s), and actual value
     */
    std::string errorMessage(SensorData& data) override;

private:
    ECSRedLineResponse response;
    std::function<int(SensorData&)>& selector;
    std::string name;
    //ECSRedLineResponse response;

    //std::function<int(SensorData&)> selector;
    int lowerBound;
    int upperBound;

    //ECSRedLineResponse response;
};

#endif //BETTER_ENGINE_CONTROL_SOFTWARE_INTWITHINREDLINE_H
