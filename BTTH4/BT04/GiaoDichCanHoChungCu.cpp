#include "GiaoDichCanHoChungCu.h"

void GiaoDichCanHoChungCu::NhapThongTinGiaoDichCanHoChungCu() {
    GiaoDich::nhapThongTin();
    cout << "Nhap Ma Can Nha: ";
    cin >> this->maCanNha;
    cout << "Nhap Vi Tri Tang: ";
    cin >> this->viTriTang;
}

void GiaoDichCanHoChungCu::XuatThongTinGiaoDichCanHoChungCu() const{
    GiaoDich::xuatThongTin();
    cout << "Ma Can Nha: " << this->maCanNha << endl;
    cout << "Vi Tri Tang: " << this->viTriTang << endl;
}

void GiaoDichCanHoChungCu::setMaCanNha(string Ma) {
    this->maCanNha = Ma;
}
string GiaoDichCanHoChungCu::getMaCanNha() {
    return this->maCanNha;
}

void GiaoDichCanHoChungCu::setViTriTang(int viTri) {
    this->viTriTang = viTri;
}
int GiaoDichCanHoChungCu::getViTriTang() {
    return this->viTriTang;
}

double GiaoDichCanHoChungCu::thanhTien() {
    if (this->viTriTang == 1) {
        return this->getDienTich() * this->getDonGia() * 2;
    } else if (this->viTriTang > 1 && this->viTriTang < 15) {
        return this->getDienTich() * this->getDonGia();
    }
    return this->getDienTich() * this->getDonGia() * 1.2;
}