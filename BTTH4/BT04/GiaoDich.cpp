#include "GiaoDich.h"
void GiaoDich::nhapThongTin() {
    cout << "Nhap Ma Giao Dich: ";
    cin >> this->maGiaoDich;
    cout << "Nhap Ngay Giao Dich: ";
    cin >> this->ngayGiaoDich;
    cout << "Nhap Don Gia: ";
    cin >> this->donGia;
    cout << "Nhap Dien Tich: ";
    cin >> this->dienTich;
}

void GiaoDich::xuatThongTin() const {
    cout << "Ma Giao Dich: " << this->maGiaoDich << endl;
    cout << "Ngay Giao Dich: " << this->ngayGiaoDich << endl;
    cout << "Don Gia: " << this->donGia << endl;
    cout << "Dien Tich: " << this->dienTich << endl;
}

void GiaoDich::setMaGiaoDich(string Ma) {
    this->maGiaoDich = Ma;
}
string GiaoDich::getMaGiaoDich() {
    return this->maGiaoDich;
}

void GiaoDich::setNgayGiaoDich(string Ngay) {
    this->ngayGiaoDich = Ngay;
}
string GiaoDich::getNgayGiaoDich() {
    return this->ngayGiaoDich;
}

void GiaoDich::setDonGia(double giaTien) {
    this->donGia = giaTien;
}
double GiaoDich::getDonGia() {
    return this->donGia;
}

void GiaoDich::setDienTich(double dientich) {
    this->dienTich = dientich;
}
double GiaoDich::getDienTich() {
    return this->dienTich;
}
