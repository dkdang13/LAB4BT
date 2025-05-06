#include "GiaoDichDat.h"
void GiaoDichDat::setLoaiDat(string &loai) {
    do {
        cout << "Nhap Loai Dat (A, B, C): ";
        cin >> loai;
    } while(loai < "A" || loai > "C");
    this->loaiDat = loai;
}
string GiaoDichDat::getLoaiDat() {
    return this->loaiDat;
}

void GiaoDichDat::NhapThongTinGiaoDichDat() {
    GiaoDich::nhapThongTin();
    string loai;
    GiaoDichDat::setLoaiDat(loai);
}

void GiaoDichDat::XuatThongTinGiaoDichDat() const {
    GiaoDich::xuatThongTin();
    cout << "Loai Dat: " << this->loaiDat << endl;
}

double GiaoDichDat::thanhTien() {
    double cost = 0;
    if (loaiDat == "A") {
        cost = this->getDienTich() * this->getDonGia() * 1.5;
    } else {
        cost = this->getDienTich() * this->getDonGia();
    }
    return cost;
}
