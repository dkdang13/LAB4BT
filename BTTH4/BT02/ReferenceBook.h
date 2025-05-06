#pragma once
#include "Book.h"

class referenceBook : public Book
{
private:
    double taxes;

public:
    referenceBook() : Book()
    {
        this->taxes = 0;
    }

    void setTaxes(double Tax);
    double getTaxes();

    void referenceBookInfoInput();
    void referenceBookInfoOutput() const;

    double TotalCost();
};