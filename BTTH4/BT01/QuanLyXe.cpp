#include "QuanLyXe.h"
#include <iostream>
using namespace std;

void Management::nhapDanhSachXeNoiThanh(innerCityBus *xeNoiThanh) {
    for (int i = 0; i < 2; i++) {
        xeNoiThanh[i].innerCityBusInfoInput();
    }
}

void Management::xuatDanhSachXeNoiThanh(innerCityBus *xeNoiThanh) {
    for (int i = 0; i < 2; i++) {
        xeNoiThanh[i].innerCityBusInfoOutput();
    }
}

double Management::tongDoanhThuXeNoiThanh(innerCityBus *xeNoiThanh) {
    double sumRevenue = 0;
    for (int i = 0; i < 2; i++) {
        sumRevenue += xeNoiThanh[i].getRevenue();
    }
    return sumRevenue;
}

void Management::nhapDanhSachXeNgoaiThanh(suburbanBus *xeNgoaiThanh) {

    for (int i = 0; i < 2; i++) {
        xeNgoaiThanh[i].suburbanBusInfoInput();
    }
}

void Management::xuatDanhSachXeNgoaiThanh(suburbanBus *xeNgoaiThanh) {
    for (int i = 0; i < 2; i++) {
        xeNgoaiThanh[i].suburbanBusInfoOutput();
    }
}

double Management::tongDoanhThuXeNgoaiThanh(suburbanBus *xeNgoaiThanh) {
    double sumRevenue = 0;
    for (int i = 0; i < 2; i++) {
        sumRevenue += xeNgoaiThanh[i].getRevenue();
    }
    return sumRevenue;
}

void Management::Menu() {
    double doanhThuXeNoiThanh, doanhThuXeNgoaiThanh;
    do {
        do {
            cout << "1. Nhap danh sach xe noi thanh: " << endl;
            cout << "2. Nhap danh sach xe ngoai thanh: " << endl;
            cout << "3. Xuat danh sach xe ngoi thanh: " << endl;
            cout << "4. Xuat danh sach xe ngoai thanh: " << endl;
            cout << "5. Tinh tong doanh thu: " << endl;
            cout << "6. Thoat chuong trinh." << endl;
            cout << "Nhap lua chon: "; cin >> k;
        } while (k < 1 || k > 6);
        switch (k)
        {
        case 1:
            nhapDanhSachXeNoiThanh(xeNoiThanh, n);
            break;
        case 2:
            nhapDanhSachXeNgoaiThanh(xeNgoaiThanh, m);
            break;
        case 3:
            xuatDanhSachXeNoiThanh(xeNoiThanh, n);
            break;
        case 4:
            xuatDanhSachXeNgoaiThanh(xeNgoaiThanh, m);
            break;
        case 5:
            doanhThuXeNoiThanh = tongDoanhThuXeNoiThanh(xeNoiThanh, n);
            cout << "Tong doanh thu xe noi thanh: " << doanhThuXeNoiThanh << endl;
            doanhThuXeNgoaiThanh = tongDoanhThuXeNgoaiThanh(xeNgoaiThanh, m);
            cout << "Tong doanh thu xe ngoai thanh: " << doanhThuXeNgoaiThanh << endl;
            cout << "Tong doanh thu xe noi thanh va ngoai thanh: " << doanhThuXeNgoaiThanh + doanhThuXeNoiThanh << endl;
            break;
        default:
            break;
        }
    } while (k != 6);
}