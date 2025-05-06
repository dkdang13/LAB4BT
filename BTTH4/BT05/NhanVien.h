#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
    string hoTen;
    string ngaySinh;

public:
    NhanVien()
    {
        this->hoTen = "";
        this->ngaySinh = "";
    }

    void Nhap();
    void Xuat() const;

    virtual double tinhLuong() = 0;
};
