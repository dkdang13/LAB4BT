#include "NhanVien.h"

class NhanVienVP : public NhanVien
{
private:
    int ngayLamViec;

public:
    NhanVienVP() : NhanVien()
    {
        this->ngayLamViec = 0;
    }

    void NhapThongTinNhanVienVP();
    void XuatThongTinNhanVienVP() const;

    double tinhLuong() override;
};
