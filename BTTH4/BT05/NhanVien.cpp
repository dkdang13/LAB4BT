#include "NhanVien.h"
void NhanVien::Nhap() {
    cout << "Nhap Ho Ten: ";
    cin >> this->hoTen;
    cout << "Nhap Ngay Sinh: ";
    cin >> this->ngaySinh;
}

void NhanVien::Xuat() const {
    cout << "Ho Ten: " << this->hoTen << endl;
    cout << "Ngay Sinh: " << this->ngaySinh << endl;
}
