#include "Xe.h"
#include <iostream>
using namespace std;
void Bus::setBusID(string ID) {
    this->busID = ID;
}
string Bus::getBusID() const {
    return this->busID;
}

void Bus::setDriverName(string name) {
    this->driverName = name;
}
string Bus::getDriverName() {
    return this->driverName;
}

void Bus::setBusPlate(string plate) {
    this->busPlate = plate;
}
string Bus::getBusPlate() {
    return this->busPlate;
}

void Bus::setRevenue(double revenueInput) {
    this->revenue = revenueInput;
}
double Bus::getRevenue() {
    return this->revenue;
}

void Bus::busInfoInput() {
    cout << "Nhap Ma So Chuyen: "; cin >> this->busID;
    cout << "Nhap Ten Tai Xe: "; cin >> this->driverName;
    cout << "Nhap Bien So Xe: "; cin >> this->busPlate;
    cout << "Nhap Doanh Thu: "; cin >> this->revenue;
}

void Bus::busInfoOutput() {
    cout << "Ma So Chuyen: " << this->busID << endl;
    cout << "Ten Tai Xe: " << this->driverName << endl;
    cout << "Nhap Bien So Xe: " << this->busPlate << endl;
    cout << "Nhap Doanh Thu: " << this->revenue << endl;
}
