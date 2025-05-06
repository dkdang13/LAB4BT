#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
#include<vector>

int main() {
    vector<NhanVienVP> VP;
    vector<NhanVienSX> SX;
    int n, m;
    cout << "Nhap so luong nhan vien van phong: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        NhanVienVP A;
        A.NhapThongTinNhanVienVP();
        VP.push_back(A);
    } 
    cout << "Nhap so luong nhan vien san xuat: ";
    cin >> m;
    for (int i = 0; i < m; i++) {
        NhanVienSX A;
        A.NhapThongTinNhanVienSX();
        SX.push_back(A);
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        VP[i].XuatThongTinNhanVienVP();
        sum += VP[i].tinhLuong();
        cout << "Luong: "<< VP[i].tinhLuong() << endl;
    }

    for (int i = 0; i < m; i++) {
        SX[i].XuatThongTinNhanVienSX();
        sum += SX[i].tinhLuong();
        cout << "Luong: " << SX[i].tinhLuong() << endl;
    }
    
    cout << "Tong Luong Phai Tra: " << sum << endl;
    return 0;

}