#pragma once
#include "Xe.h"

class innerCityBus : public Bus
{
private:
    string busRouteNumber;
    double distance;

public:
    innerCityBus() : Bus()
    {
        this->busRouteNumber = "";
        this->distance = 0;
    }

    void setBusRouteNumber(string route);
    string getBusRouteNumber();

    void setDistance(double Distance);
    double getDistance();

    void innerCityBusInfoInput();
    void innerCityBusInfoOutput();
};
    