#pragma once
#include "GiaoDich.h"

class GiaoDichDat : public GiaoDich
{
private:
    string loaiDat;

public:
    GiaoDichDat() : GiaoDich()
    {
        this->loaiDat = "";
    }

    void NhapThongTinGiaoDichDat();
    void XuatThongTinGiaoDichDat() const;

    void setLoaiDat(string &loai);
    string getLoaiDat();

    double thanhTien();
};
