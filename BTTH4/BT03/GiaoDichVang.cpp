#include "GiaoDichVang.h"

void GoldTransaction::goldTransactionInput() {
    Transaction::Input();
    cout << "Nhap Loai Vang: ";
    cin >> this->goldType;
}

void GoldTransaction::goldTransactionOutput() const {
    Transaction::Output();
    cout << "Loai Vang: " << this->goldType << endl;
}


void GoldTransaction::setGoldType(string GoldType) {
    this->goldType = GoldType;
}
string GoldTransaction::getGoldType() {
    return this->goldType;
}

double GoldTransaction::totalTransactionCost() {
    return this->getQuantity() * this->getPrice();
}
