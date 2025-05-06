#pragma once
#include <string>
using namespace std;

class Book
{
protected:
    string bookID;
    string date;
    double price;
    int quantity;
    string publisher;

public:
    Book()
    {
        this->bookID = "";
        this->date = "";
        this->price = 0;
        this->quantity = 0;
        this->publisher = "";
    }

    void setBookID(string ID);
    string getBookID();

    void setDate(string Date);
    string getDate();

    void setPrice(double Price);
    double getPrice();

    void setQuantity(int Quantity);
    int getQuantity();

    void setPublisher(string Publisher);
    string getPublisher();

    void BookInfoInput();
    void BookInfoOutput() const;
};
