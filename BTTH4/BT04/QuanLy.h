#include "GiaoDichNhaPho.h"
#include "GiaoDichCanHoChungCu.h"
#include "GiaoDichDat.h"

class QuanLy
{
private:
    GiaoDichDat D[10];
    GiaoDichNhaPho NP[10];
    GiaoDichCanHoChungCu CC[10];
    int m, n, p, k;

public:
    void NhapDanhSachGiaoDichDat(GiaoDichDat *D, int &m)
    {
        do
        {
            cout << "Nhap So Luong Giao Dich Dat: ";
            cin >> m;
        } while (m < 1 || m > 9);
        for (int i = 0; i < m; i++)
        {
            D[i].NhapThongTinGiaoDichDat();
        }
    }
    void XuatDanhSachGiaoDichDat(GiaoDichDat *D, const int &m)
    {
        for (int i = 0; i < m; i++)
        {
            D[i].XuatThongTinGiaoDichDat();
        }
    }

    void NhapDanhSachGiaoDichNhaPho(GiaoDichNhaPho *NP, int &n)
    {
        do
        {
            cout << "Nhap So Luong Giao Dich Nha Pho: ";
            cin >> n;
        } while (n < 1 || n > 9);
        for (int i = 0; i < n; i++)
        {
            NP[i].NhapThongTinGiaoDichNhaPho();
        }
    }
    void XuatDanhSachGiaoDichNhaPho(GiaoDichNhaPho *NP, const int &n)
    {
        for (int i = 0; i < n; i++)
        {
            NP[i].XuatThongTinGiaoDichNhaPho();
        }
    }

    void NhapDanhSachGiaoDichCanHoChungCu(GiaoDichCanHoChungCu *CC, int &p)
    {
        do
        {
            cout << "Nhap So Luong Giao Dich Can Ho Chung Cu: ";
            cin >> p;
        } while (p < 1 || p > 9);
        for (int i = 0; i < p; i++)
        {
            CC[i].NhapThongTinGiaoDichCanHoChungCu();
        }
    }
    void XuatDanhSachGiaoDichCanHoChungCu(GiaoDichCanHoChungCu *CC, const int &p)
    {
        for (int i = 0; i < p; i++)
        {
            CC[i].XuatThongTinGiaoDichCanHoChungCu();
        }
    }

    void TrungBinhThanhTienCuaCanHoChungCu(GiaoDichCanHoChungCu *CC, const int &p)
    {
        double tientb = 0;
        for (int i = 0; i < p; i++)
        {
            tientb += CC[i].thanhTien() / p;
        }
        cout << "Trung Binh Thanh Tien Cua Can Ho Chung Cu: " << tientb << endl;
    }

    GiaoDichNhaPho GiaoDichNhaPhoCoGiaTriCaoNhat(GiaoDichNhaPho *NP, const int &n)
    {
        double highest = NP[0].thanhTien();
        GiaoDichNhaPho A = NP[0];
        for (int i = 0; i < n; i++)
        {
            if (highest < NP[i].thanhTien())
            {
                highest = NP[i].thanhTien();
                A = NP[i];
            }
        }
        return A;
    }

    void XuatCacGiaoDichVaoThang122024(GiaoDichDat *D, GiaoDichNhaPho *NP, GiaoDichCanHoChungCu *CC)
    {
        for (int i = 0; i < m; i++)
        {
            if (D[i].getNgayGiaoDich() == "12/2024")
            {
                D[i].XuatThongTinGiaoDichDat();
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (NP[i].getNgayGiaoDich() == "12/2024")
            {
                NP[i].XuatThongTinGiaoDichNhaPho();
            }
        }
        for (int i = 0; i < p; i++)
        {
            if (CC[i].getNgayGiaoDich() == "12/2024")
            {
                CC[i].XuatThongTinGiaoDichCanHoChungCu();
            }
        }
    }

    void Menu()
    {
        do
        {
            do
            {
                cout << "1. Nhap Giao Dich Dat" << endl;
                cout << "2. Nhap Giao Dich Nha Pho" << endl;
                cout << "3. Nhap Giao Dich Can Ho Chung Cu" << endl;
                cout << "4. Xuat Giao Dich Dat" << endl;
                cout << "5. Xuat Giao Dich Nha Pho" << endl;
                cout << "6. Xuat Giao Dich Can Ho Chung Cu" << endl;
                cout << "7. Tinh Trung Binh Thanh Tien Cua Can Ho Chung Cu" << endl;
                cout << "8. Giao Dich Nha Pho Co Gia Tri Cao Nhat" << endl;
                cout << "9. Xuat Cac Giao Dich Vao 12/2024" << endl;
                cout << "10. Thoat chuong Trinh" << endl;
                cout << "Moi Chon: ";
                cin >> k;
            } while (k < 1 || k > 10);

            switch (k)
            {
            case 1:
                NhapDanhSachGiaoDichDat(D, m);
                break;
            case 2:
                NhapDanhSachGiaoDichNhaPho(NP, n);
                break;
            case 3:
                NhapDanhSachGiaoDichCanHoChungCu(CC, p);
                break;
            case 4:
                XuatDanhSachGiaoDichDat(D, m);
                break;
            case 5:
                XuatDanhSachGiaoDichNhaPho(NP, n);
                break;
            case 6:
                XuatDanhSachGiaoDichCanHoChungCu(CC, p);
                break;
            case 7:
                TrungBinhThanhTienCuaCanHoChungCu(CC, p);
                break;
            case 8:
                GiaoDichNhaPhoCoGiaTriCaoNhat(NP, n).XuatThongTinGiaoDichNhaPho();
                break;
            case 9:
                XuatCacGiaoDichVaoThang122024(D, NP, CC);
                break;
            default:
                break;
            }
        } while (k != 10);
    }
};