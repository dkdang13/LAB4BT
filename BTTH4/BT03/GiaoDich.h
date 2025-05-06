#pragma once
#include <string>
#include <iostream>
using namespace std;

class Transaction
{
private:
    string transactionID;
    string transactionDate;
    double price;
    double quantity;

public:
    Transaction()
    {
        this->transactionID = "";
        this->transactionDate = "";
        this->price = 0;
        this->quantity = 0;
    }

    void setTransactionID(string ID);
    string getTransactionID();

    void setTransactionDate(string Date);
    string getTransactionDate();

    void setPrice(double Price);
    double getPrice();

    void setQuantity(double Quantity);
    double getQuantity();

    void Input();
    void Output() const;
};