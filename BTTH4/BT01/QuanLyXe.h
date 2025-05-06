#include "Xe.h"
#include "XeNgoaiThanh.h"
#include "XeNoiThanh.h"

class Management
{
private:
    innerCityBus xeNoiThanh[2];
    suburbanBus xeNgoaiThanh[2];
    int k;

public:
    void nhapDanhSachXeNoiThanh(innerCityBus *xeNoiThanh);
    void xuatDanhSachXeNoiThanh(innerCityBus *xeNoiThanh);

    double tongDoanhThuXeNoiThanh(innerCityBus *xeNoiThanh);

    void nhapDanhSachXeNgoaiThanh(suburbanBus *xeNgoaiThanh);
    void xuatDanhSachXeNgoaiThanh(suburbanBus *xeNgoaiThanh);
    double tongDoanhThuXeNgoaiThanh(suburbanBus *xeNgoaiThanh);

    void Menu();
};
