#include "GiaoDich.h"

void Transaction::Input() {
    cout << "Nhap Ma Giao Dich: ";
    cin >> this->transactionID;
    cout << "Nhap Ngay Giao Dich: ";
    cin >> this->transactionDate;
    cout << "Nhap Don Gia: ";
    cin >> this->price;
    cout << "Nhap So Luong: ";
    cin >> this->quantity;
}

void Transaction::Output() const {
    cout << "Ma Giao Dich: " << this->transactionID << endl;
    cout << "Ngay Giao Dich: " << this->transactionDate << endl;
    cout << "Don Gia: " << this->price << endl;
    cout << "So Luong: " << this->quantity << endl;
}

void Transaction::setTransactionID(string ID) {
    this->transactionID = ID;
}
string Transaction::getTransactionID() {
    return this->transactionID;
}

void Transaction::setTransactionDate(string Date) {
    this->transactionDate = Date;
}
string Transaction::getTransactionDate() {
    return this->transactionDate;
}

void Transaction::setPrice(double Price) {
    this->price = Price;
}
double Transaction::getPrice() {
    return this->price;
}

void Transaction::setQuantity(double Quantity) {
    this->quantity = Quantity;
}
double Transaction::getQuantity() {
    return this->quantity;
}
