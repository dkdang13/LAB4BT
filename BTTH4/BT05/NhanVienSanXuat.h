#pragma once
#include "NhanVien.h"
class NhanVienSX : public NhanVien
{
private:
    double luongCanBan;
    int soSanPham;

public:
    NhanVienSX() : NhanVien()
    {
        this->luongCanBan = 0;
        this->soSanPham = 0;
    }

    void NhapThongTinNhanVienSX();
    void XuatThongTinNhanVienSX() const;

    double tinhLuong() override;
};