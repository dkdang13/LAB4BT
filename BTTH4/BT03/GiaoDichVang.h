#pragma once
#include "GiaoDich.h"
class GoldTransaction : public Transaction
{
private:
    string goldType;

public:
    GoldTransaction() : Transaction()
    {
        this->goldType = "";
    }

    void goldTransactionInput();
    void goldTransactionOutput() const;

    void setGoldType(string GoldType);
    string getGoldType();

    double totalTransactionCost();
};
