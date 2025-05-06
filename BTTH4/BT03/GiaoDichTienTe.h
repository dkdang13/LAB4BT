#pragma once
#include "GiaoDich.h"

class MoneyTransaction : public Transaction
{
private:
    int currencyUnit;

public:
    MoneyTransaction() : Transaction()
    {
        this->currencyUnit = 0;
    }

    void moneyTransactionInput();
    void moneyTransactionOutput() const;

    void setCurrencyUnit(int &Unit);
    int getCurrencyUnit();

    double totalTransactionCost();
};
