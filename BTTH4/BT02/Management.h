#include "StudentBook.h"
#include "ReferenceBook.h"
#include <iostream>
using namespace std;


class Management {
private:
    studentBook SGK[3];
    referenceBook STK[3];
    int k;
public:

    void NhapThongTinSGK(studentBook *SGK) {
        for (int i = 0; i < 3; i++) {
            SGK[i].studentBookInfoInput();
        }
    }

    void XuatThongTinSGK(studentBook *SGK) {
        for (int i = 0; i < 3; i++) {
            SGK[i].studentBookInfoOutput();
        }
    }

    void NhapThongTinSTK(referenceBook *STK) {
        for (int i = 0; i < 3; i++) {
            STK[i].referenceBookInfoInput();
        }
    }

    void XuatThongTinSTK(referenceBook *SGK) {
        for (int i = 0; i < 3; i++) {
            SGK[i].referenceBookInfoOutput();
        }
    }

    void TongTienChoSach() {
        double tienSGK = 0, tienSTK = 0;
        for (int i = 0; i < 3; i++) {
            tienSGK += SGK[i].studentBook::TotalCost();
            tienSTK += STK[i].referenceBook::TotalCost();
        }
        cout << "Tong Tien Sach Giao Khoa: " << tienSGK << endl;
        cout << "Tong Tien Sach Tham Khao: " << tienSTK << endl;
    }

    void TrungBinhCongTienSTK() {
        double tbc = 0;
        for (int i = 0; i < 3; i++) {
            tbc += STK[i].referenceBook::TotalCost()/3;
        }
        cout << "Trung Binh Cong Tien STK: " << tbc << endl;
    }

    void SachNXB() {
        string NXB;
        cout << "Nhap Nha Xuat Ban Muon Tim: "; cin >> NXB;
        for (int i = 0; i < 3; i++) {
            if (NXB == SGK[i].studentBook::getPublisher()) {
                SGK[i].studentBookInfoOutput();
            }
        }
    }

    void Menu() {
        do {
            do {
                cout << "1. Nhap danh sach SGK: " << endl;
                cout << "2. Nhap danh sach STK: " << endl;
                cout << "3. Xuat danh sach SGK: " << endl;
                cout << "4. Xuat danh sach STK: " << endl;
                cout << "5. Tinh Tong Tien Cho Tung Loai Sach: " << endl;
                cout << "6. Tinh Trung Binh Cong STK: " << endl;
                cout << "7. Tim Sach Cua NXB:" << endl;
                cout << "8. Thoat Chuong Trinh." << endl;
                cout << "Moi Chon: "; cin >> k;

            } while (k < 1 || k > 8);
            
            switch (k) {
                case 1:
                    NhapThongTinSGK(SGK);
                    break;
                case 2:
                    NhapThongTinSTK(STK);
                    break;
                case 3:
                    XuatThongTinSGK(SGK);
                    break;
                case 4:
                    XuatThongTinSTK(STK);
                    break;
                case 5:
                    TongTienChoSach();
                    break;
                case 6:
                    TrungBinhCongTienSTK();
                    break;
                case 7:
                    SachNXB();
                    break;
                default:
                    break;
            }
        } while (k != 8);
    }
};