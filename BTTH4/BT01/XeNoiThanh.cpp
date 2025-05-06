#include "XeNoiThanh.h"
#include <iostream>
using namespace std;
void innerCityBus::innerCityBusInfoInput() {
    Bus::busInfoInput();
    cout << "Nhap So Tuyen Xe Buyt: ";
    cin >> this->busRouteNumber;
    cout << "Nhap So KM Di Duoc: ";
    cin >> this->distance;
}

void innerCityBus::setBusRouteNumber(string route) {
    this->busRouteNumber = route;
}
string innerCityBus::getBusRouteNumber() {
    return this->busRouteNumber;
}

void innerCityBus::setDistance(double Distance) {
    this->distance = Distance;
}
double innerCityBus::getDistance() {
    return this->distance;
}

void innerCityBus::innerCityBusInfoOutput() {
    Bus::busInfoOutput();
    cout << "So Tuyen Xe Buyt: " << this->busRouteNumber << endl;
    cout << "So KM Di Duoc: " << this->distance << endl;
}
