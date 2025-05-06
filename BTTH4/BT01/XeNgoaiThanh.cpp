#include "XeNgoaiThanh.h"
#include <iostream>
using namespace std;
void suburbanBus::setDestination(string Destination) {
    this->destination = Destination;
}
string suburbanBus::getDestination() {
    return this->destination;
}

void suburbanBus::setDays(int Days) {
    this->days = Days;
}
int suburbanBus::getDays() {
    return this->days;
}

void suburbanBus::suburbanBusInfoInput() {
    Bus::busInfoInput();
    cout << "Nhap Noi Den: ";
    cin >> this->destination;
    cout << "Nhap So Ngay Di: ";
    cin >> this->days;
}

void suburbanBus::suburbanBusInfoOutput() {
    Bus::busInfoOutput();
    cout << "Noi Den: " << this->destination << endl;
    cout << "So Ngay Di: " << this->days << endl;
}