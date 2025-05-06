#include "GiaoDichNhaPho.h"

void GiaoDichNhaPho::setLoaiNhaPho(int &loai) {
    do {
        cout << "Nhap Loai Nha: " << endl;
        cout << "1. Cao Cap" << endl;
        cout << "2. Thuong" << endl;
        cout << "Moi Chon: "; cin >> loai;
    } while (loai < 1 || loai > 2);
    this->loaiNhaPho = loai;
}
int GiaoDichNhaPho::getLoaiNhaPho() {
    return this->loaiNhaPho;
}

void GiaoDichNhaPho::NhapThongTinGiaoDichNhaPho() {
    GiaoDich::nhapThongTin();
    int loai;
    GiaoDichNhaPho::setLoaiNhaPho(loai);
}

void GiaoDichNhaPho::XuatThongTinGiaoDichNhaPho() const {
    GiaoDich::xuatThongTin();
    cout << "Loai Nha: ";
    if (this->loaiNhaPho == 1) {
        cout << "Cao cap" << endl;
    } else {
        cout << "Thuong" << endl;
    }
}

double GiaoDichNhaPho::thanhTien() {
    double cost = 0;
    if (loaiNhaPho == 1) {
        cost = this->getDienTich() * this->getDonGia();
    } else {
        cost = this->getDienTich() * this->getDonGia() * 0.9;
    }
    return cost;
}
