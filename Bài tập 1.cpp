#include <iostream>
#include <cmath>
using namespace std;

struct PhanSo
{
    int tu, mau;
};

int UCLN(int a, int b)
{
    a = abs(a); b = abs(b);
    while (b != 0)
        {
        int temp = a % b;
        a = b;
        b = temp;
        }
    return a;
}

void nhapPhanSo(PhanSo &ps)
{
    cin >> ps.tu;
    do
        {
        cin >> ps.mau;
        if (ps.mau == 0) cout << "Mau so phai khac 0. Vui long nhap lai!\n";
        } while (ps.mau == 0);
}

void rutGon(PhanSo &ps)
{
    int ucln = UCLN(ps.tu, ps.mau);
    ps.tu /= ucln;
    ps.mau /= ucln;
    if (ps.mau < 0)
        {
        ps.tu = -ps.tu;
        ps.mau = -ps.mau;
        }
}

void xuatPhanSo(PhanSo ps)
{
    if (ps.mau == 1) cout << ps.tu;
    else if (ps.tu == 0) cout << 0;
    else cout << ps.tu << "/" << ps.mau;
    cout << endl;
}

int main()
{
    PhanSo ps;
    nhapPhanSo(ps);
    rutGon(ps);
    xuatPhanSo(ps);
    return 0;
}

