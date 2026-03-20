#include <iostream>
using namespace std;

// Khai báo cấu trúc lưu trữ cho Phân Số
struct PhanSo
{
    int tu;  
    int mau; 
};

// Hàm nhập phân số

void nhapPhanSo(PhanSo &ps)
{
    
    cin >> ps.tu >> ps.mau; 
}

// Hàm in phân số ra màn hình
void xuatPhanSo(PhanSo ps)
{
    // In theo định dạng Tử/Mẫu và tự động xuống dòng (endl)
    cout << ps.tu << "/" << ps.mau << endl;
}

// Hàm tính Tổng hai phân số
PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo kq; // Biến lưu kết quả
    // Công thức cộng: (tử1 * mẫu2 + tử2 * mẫu1) / (mẫu1 * mẫu2)
    kq.tu = a.tu * b.mau + b.tu * a.mau; // Quy đồng tử số
    kq.mau = a.mau * b.mau;              // Mẫu số chung
    return kq;
}

// Hàm tính Hiệu hai phân số
PhanSo hieu(PhanSo a, PhanSo b)
{
    PhanSo kq;
    // Công thức trừ: (tử1 * mẫu2 - tử2 * mẫu1) / (mẫu1 * mẫu2)
    kq.tu = a.tu * b.mau - b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return kq;
}

// Hàm tính Tích (Nhân) hai phân số
PhanSo tich(PhanSo a, PhanSo b)
{
    PhanSo kq;
    // Công thức nhân: Tử nhân tử, mẫu nhân mẫu
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    return kq;
}

// Hàm tính Thương (Chia) hai phân số
PhanSo thuong(PhanSo a, PhanSo b)
{
    PhanSo kq;
    // Công thức chia: Nhân nghịch đảo (tử1 * mẫu2) / (mẫu1 * tử2)
    kq.tu = a.tu * b.mau;
    kq.mau = a.mau * b.tu;
    return kq;
}

// Hàm chính của chương trình
int main()
{
    PhanSo ps1, ps2; 
    
    nhapPhanSo(ps1); // Nhập phân số thứ nhất
    nhapPhanSo(ps2); // Nhập phân số thứ hai
    
    // Gọi các hàm tính toán và in kết quả trực tiếp ra màn hình
    cout << "Tong: "; xuatPhanSo(tong(ps1, ps2));
    cout << "Hieu: "; xuatPhanSo(hieu(ps1, ps2));
    cout << "Tich: "; xuatPhanSo(tich(ps1, ps2));
    cout << "Thuong: "; xuatPhanSo(thuong(ps1, ps2));
    
    return 0; // Kết thúc chương trình
}
