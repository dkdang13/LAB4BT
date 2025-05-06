#pragma once
#include "GiaoDich.h"

class GiaoDichNhaPho : public GiaoDich
{
private:
    int loaiNhaPho;

public:
    GiaoDichNhaPho() : GiaoDich()
    {
        this->loaiNhaPho = 0;
    }

    void NhapThongTinGiaoDichNhaPho();
    void XuatThongTinGiaoDichNhaPho() const;

    void setLoaiNhaPho(int &loai);
    int getLoaiNhaPho();

    double thanhTien();
};
