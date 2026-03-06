#include <iostream>
using namespace std;

struct PhanSo
{
    int tu, mau;
};

void nhapPhanSo(PhanSo &ps)
{
    cin >> ps.tu;
    do
        {
        cin >> ps.mau;
        } while (ps.mau == 0);
}

void xuatPhanSo(PhanSo ps)
{
    cout << ps.tu << "/" << ps.mau;
}

double giaTri(PhanSo ps)
{
    return (double)ps.tu / ps.mau;
}

int main()
{
    PhanSo ps1, ps2;
    nhapPhanSo(ps1);
    nhapPhanSo(ps2);
    if (giaTri(ps1) > giaTri(ps2))
        {
        xuatPhanSo(ps1);
        } else if (giaTri(ps1) < giaTri(ps2))
        {
        xuatPhanSo(ps2);
        } else
        {
        cout << "Hai phan so bang nhau";
        }
    cout << endl;

    return 0;
}

