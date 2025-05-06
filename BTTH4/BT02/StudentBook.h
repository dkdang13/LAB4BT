#pragma once
#include "Book.h"

class studentBook : public Book
{
private:
    bool bookStatus; // 0. old, 1. new
public:
    studentBook() : Book()
    {
        this->bookStatus = 0;
    }

    void setBookStatus(bool status);
    bool getBookSatus();

    void studentBookInfoInput();
    void studentBookInfoOutput() const;

    double TotalCost();
};

