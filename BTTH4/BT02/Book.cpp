#include "Book.h"
#include <iostream>
using namespace std;

void Book::setBookID(string ID) {
    this->bookID = ID;
}
string Book::getBookID() {
    return this->bookID;
}

void Book::setDate(string Date) {
    this->date = Date;
}
string Book::getDate() {
    return this->date;
}

void Book::setPrice(double Price) {
    this->price = Price;
}
double Book::getPrice() {
    return this->price;
}

void Book::setQuantity(int Quantity) {
    this->quantity = Quantity;
}
int Book::getQuantity() {
    return this->quantity;
}

void Book::setPublisher(string Publisher) {
    this->publisher = Publisher;
}
string Book::getPublisher() {
    return this->publisher;
}

void Book::BookInfoInput() {
    cout << "Nhap Ma Sach: "; cin >> this->bookID;
    cout << "Nhap Ngay Nhap: "; cin >> this->date;
    cout << "Nhap Don Gia: "; cin >> this->price;
    cout << "Nhap So Luong: "; cin >> this->quantity;
    cout << "Nhap Nha Xuat Ban: "; cin >> this->publisher;
}

void Book::BookInfoOutput() const {
    cout << "Ma Sach: " << this->bookID << endl;
    cout << "Ngay Nhap: " << this->date << endl;
    cout << "Don Gia: " << this->price << endl;
    cout << "So Luong: " << this->quantity << endl;
    cout << "Nha Xuat Ban: " << this->publisher << endl;
}
