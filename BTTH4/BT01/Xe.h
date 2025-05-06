#pragma once
#include <string>
using namespace std;
class Bus
{
protected:
    string busID;
    string driverName;
    string busPlate;
    double revenue;

public:
    Bus()
    {
        this->busID = "";
        this->driverName = "";
        this->busPlate = "";
        this->revenue = 0;
    }

    void setBusID(string ID);
    string getBusID() const;

    void setDriverName(string name);
    string getDriverName();

    void setBusPlate(string plate);
    string getBusPlate();

    void setRevenue(double revenueInput);
    double getRevenue();

    void busInfoInput();
    void busInfoOutput();
};
    
