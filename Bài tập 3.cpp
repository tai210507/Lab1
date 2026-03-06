#include <iostream>
using namespace std;

struct PhanSo
{
    int tu, mau;
};

void nhapPhanSo(PhanSo &ps)
{
    cin >> ps.tu >> ps.mau;
}

void xuatPhanSo(PhanSo ps)
{
    cout << ps.tu << "/" << ps.mau << endl;
}

PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return kq;
}

PhanSo hieu(PhanSo a, PhanSo b)
{
    PhanSo kq;
    kq.tu = a.tu * b.mau - b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return kq;
}

PhanSo tich(PhanSo a, PhanSo b)
{
    PhanSo kq;
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    return kq;
}

PhanSo thuong(PhanSo a, PhanSo b)
{
    PhanSo kq;
    kq.tu = a.tu * b.mau;
    kq.mau = a.mau * b.tu;
    return kq;
}

int main()
{
    PhanSo ps1, ps2;
    nhapPhanSo(ps1);
    nhapPhanSo(ps2);
    cout << "Tong: "; xuatPhanSo(tong(ps1, ps2));
    cout << "Hieu: "; xuatPhanSo(hieu(ps1, ps2));
    cout << "Tich: "; xuatPhanSo(tich(ps1, ps2));
    cout << "Thuong: "; xuatPhanSo(thuong(ps1, ps2));
    return 0;
}

