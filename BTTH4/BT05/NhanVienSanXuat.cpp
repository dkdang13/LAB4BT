#include "NhanVienSanXuat.h"

void NhanVienSX::NhapThongTinNhanVienSX() {
    NhanVien::Nhap();
    cout << "Nhap Luong Can Ban: ";
    cin >> this->luongCanBan;
    cout << "Nhap So San Pham: ";
    cin >> this->soSanPham;
}

void NhanVienSX::XuatThongTinNhanVienSX() const {
    NhanVien::Xuat();
    cout << "Luong Can Ban: " << this->luongCanBan << endl;
    cout << "So San Pham: " << this->soSanPham << endl;
}

double NhanVienSX::tinhLuong() {
    return this->luongCanBan + this->soSanPham * 5000;
}
