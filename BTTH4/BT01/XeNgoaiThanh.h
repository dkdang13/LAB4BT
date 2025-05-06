#pragma once
#include "Xe.h"

class suburbanBus : public Bus
{
private:
    string destination;
    int days;

public:
    suburbanBus() : Bus()
    {
        this->destination = "";
        this->days = 0;
    }

    void setDestination(string Destination);
    string getDestination();

    void setDays(int Days);
    int getDays();

    void suburbanBusInfoInput();
    void suburbanBusInfoOutput();
};
