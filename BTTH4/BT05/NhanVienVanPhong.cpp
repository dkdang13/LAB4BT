#include "NhanVienVanPhong.h"

void NhanVienVP::NhapThongTinNhanVienVP() {
    NhanVien::Nhap();
    cout << "Nhap So Ngay Lam Viec: ";
    cin >> this->ngayLamViec;
}

void NhanVienVP::XuatThongTinNhanVienVP() const {
    NhanVien::Xuat();
    cout << "So Ngay Lam Viec: " << this->ngayLamViec << endl;
}

double NhanVienVP::tinhLuong() {
    return this->ngayLamViec * 100000;
}
