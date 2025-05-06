#pragma once
#include "GiaoDich.h"

class GiaoDichCanHoChungCu : public GiaoDich
{
private:
    string maCanNha;
    int viTriTang;

public:
    GiaoDichCanHoChungCu() : GiaoDich()
    {
        this->maCanNha = "";
        this->viTriTang = 0;
    }

    void NhapThongTinGiaoDichCanHoChungCu();
    void XuatThongTinGiaoDichCanHoChungCu() const;

    void setMaCanNha(string Ma);
    string getMaCanNha();

    void setViTriTang(int viTri);
    int getViTriTang();

    double thanhTien();
};