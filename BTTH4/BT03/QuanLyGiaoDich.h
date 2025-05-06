#include "GiaoDichVang.h"
#include "GiaoDichTienTe.h"

class Management {
private:
    GoldTransaction G[10];
    MoneyTransaction M[10];
    int n, m, k;
public:

    void NhapDanhSachGiaoDichVang(GoldTransaction *G, int &n) {
        do {
            cout << "Nhap So Luong Giao Dich: ";
            cin >> n;
        } while (n < 1 || n > 9);
        for (int i = 0 ; i < n; i++) {
            G[i].goldTransactionInput();
        }
    }

    void XuatDanhSachGiaoDichVang(GoldTransaction *G, const int &n) {
        for (int i = 0; i < n; i++) {
            G[i].goldTransactionOutput();
        }
    }
    
    void NhapDanhSachGiaoDichNgoaiTe(MoneyTransaction *M, int &m) {
        do {
            cout << "Nhap So Luong Giao Dich: ";
            cin >> m;
        } while (m < 1 || m > 9);
        for (int i = 0 ; i < m; i++) {
            M[i].moneyTransactionInput();
        }
    }

    void XuatDanhSachGiaoDichNgoaiTe(MoneyTransaction *M, const int &m) {
        for (int i = 0; i < m; i++) {
            M[i].moneyTransactionOutput();
        }
    }

    GoldTransaction highestCostGoldTransaction(GoldTransaction *G, const int &n) {
        double costTransaction = G[0].totalTransactionCost();
        GoldTransaction A = G[0];
        for (int i = 0; i < n; i++) {
            if (costTransaction < G[i].totalTransactionCost()) {
                costTransaction = G[i].totalTransactionCost();
                A = G[i];
            }
        }
        return A;
    }

    MoneyTransaction lowestMoneyTransactionEuro(MoneyTransaction *M, const int &m) {
        double costTransaction = M[0].totalTransactionCost();
        MoneyTransaction A = M[0];
        for (int i = 0; i < m; i++) {
            if (costTransaction > M[i].totalTransactionCost() && M[i].getCurrencyUnit() == 3) {
                costTransaction = M[i].totalTransactionCost();
                A = M[i];
            }
        }
        return A;
    }

    void billionTransaction(GoldTransaction *G, MoneyTransaction *M, const int &n, const int &m) {
        long double b = 1000000000;
        for (int i = 0; i < n; i++) {
            if (G[i].totalTransactionCost() > b) {
                G[i].goldTransactionOutput();
            }
        }
        for (int i = 0; i < m; i++) {
            if (M[i].totalTransactionCost() > b) {
                M[i].moneyTransactionOutput();
            }
        }
    }

    void Menu() {
        do {
            do {
                cout << "1. Nhap Danh Sach Giao Dich Vang" << endl;
                cout << "2. Nhap Danh Sach Giao Dich Tien Te" << endl;
                cout << "3. Xuat Danh Sach Giao Dich Vang" << endl;
                cout << "4. Xuat Danh Sach Giao Dich Tien Te" << endl;
                cout << "5. Giao Dich Vang Co Gia Tri Cao Nhat" << endl;
                cout << "6. Giao Dich Tien Te Euro Co Gia Tri Thap Nhat" << endl;
                cout << "7. Xuat Ra Danh Sach Cac Giao Dich Co Gia Tri Tren 1 Ty" << endl;
                cout << "8. Thoat Chuong Trinh" << endl;
                cout << "Moi Chon: ";
                cin >> k;
            } while (k < 1 || k > 8);

            switch (k)
            {
            case 1:
                NhapDanhSachGiaoDichVang(G, n);
                break;
            case 2:
                NhapDanhSachGiaoDichNgoaiTe(M, m);
                break;
            case 3:
                XuatDanhSachGiaoDichVang(G, n);
                break;
            case 4:
                XuatDanhSachGiaoDichNgoaiTe(M, m);
                break;
            case 5:
                highestCostGoldTransaction(G, n).goldTransactionOutput();
                break;
            case 6:
                lowestMoneyTransactionEuro(M, m).moneyTransactionOutput();
                break;
            case 7:
                billionTransaction(G, M, n, m);
            default:
                break;
            }
        } while (k != 8);
    }

};