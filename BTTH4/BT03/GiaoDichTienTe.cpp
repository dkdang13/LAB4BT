#include "GiaoDichTienTe.h"

void MoneyTransaction::setCurrencyUnit(int &Unit) {
    do {
        cout << "Nhap Don Vi Tien Te: " << endl;
        cout << "1. VND" << endl;
        cout << "2. USD" << endl;
        cout << "3. Euro" << endl;
        cout << "Moi Chon: "; cin >> Unit;
    } while (Unit < 1 || Unit > 3);
    this->currencyUnit = Unit;
}

int MoneyTransaction::getCurrencyUnit() {
    return this->currencyUnit;
}

void MoneyTransaction::moneyTransactionInput() {
    Transaction::Input();
    int Unit;
    setCurrencyUnit(Unit);
}

void MoneyTransaction::moneyTransactionOutput() const {
    Transaction::Output();
    cout << "Don Vi Tien Te: ";
    if (currencyUnit == 1) {
        cout << "VND" << endl;
    }
    if (currencyUnit == 2) {
        cout << "USD" << endl;
    }
    if (currencyUnit == 3) {
        cout << "Euro" << endl;
    }
}

double MoneyTransaction::totalTransactionCost() {
    double cost;
    double USDtoVND = 25.37;
    double EuroToVND = 26.888;
    if (currencyUnit == 1) {
        // VND
        cost = this->getQuantity() * this->getPrice();
    }
    if (currencyUnit == 2) {
        // USD
        cost = this->getQuantity() * this->getPrice() * USDtoVND;
    }
    if (currencyUnit == 3) {
        // Euro
        cost = this->getQuantity() * this->getPrice() * EuroToVND;
    }
    return cost;
}
