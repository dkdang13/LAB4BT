#include "ReferenceBook.h"
#include <iostream>
using namespace std;

void referenceBook::setTaxes(double Tax) {
    this->taxes = Tax;
}
double referenceBook::getTaxes() {
    return this->taxes;
}

void referenceBook::referenceBookInfoInput() {
    Book::BookInfoInput();
    cout << "Nhap Thue San Pham: "; cin >> this->taxes;
}

void referenceBook::referenceBookInfoOutput() const {
    Book::BookInfoOutput();
    cout << "Thue San Pham: " << this->taxes << endl;
}

double referenceBook::TotalCost() {
    return this->getQuantity() * this->getPrice() + this->getTaxes();
}
