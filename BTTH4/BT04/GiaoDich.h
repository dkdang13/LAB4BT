#pragma once
#include <iostream>
#include <string>
using namespace std;

class GiaoDich
{
protected:
    string maGiaoDich;
    string ngayGiaoDich;
    double donGia;
    double dienTich;

public:
    GiaoDich()
    {
        this->maGiaoDich = "";
        this->ngayGiaoDich = "";
        this->donGia = 0;
        this->dienTich = 0;
    }

    void nhapThongTin();
    void xuatThongTin() const;

    void setMaGiaoDich(string Ma);
    string getMaGiaoDich();

    void setNgayGiaoDich(string Ngay);
    string getNgayGiaoDich();

    void setDonGia(double giaTien);
    double getDonGia();

    void setDienTich(double dientich);
    double getDienTich();
};
