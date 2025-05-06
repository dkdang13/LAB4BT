#include "StudentBook.h"
#include <iostream>
using namespace std;

void studentBook::setBookStatus(bool status) {
    this->bookStatus = status;
}
bool studentBook::getBookSatus() {
    return bookStatus;
}

void studentBook::studentBookInfoInput() {
    Book::BookInfoInput();
    cout << "Nhap Tinh Trang Sach: " << endl;
    cout << "0. Sach Cu" << endl;
    cout << "1. Sach Moi" << endl;
    cout << "Moi Chon: "; cin >> this->bookStatus;
}

void studentBook::studentBookInfoOutput() const {
    Book::BookInfoOutput();
    cout << "Tinh Trang Sach: ";
    if (this->bookStatus == 0) {
        cout << "Cu" << endl;
    } else {
        cout << "Moi" << endl;
    }
}

double studentBook::TotalCost() {
    double cost = 0;
    if (this->bookStatus == 0) {
        cost = this->getQuantity() * this->getPrice() * 0.5;
    } else {
        cost = this->getQuantity() * this->getPrice();
    }
    return cost;
}
