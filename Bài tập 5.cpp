#include <iostream>
#include <string>
using namespace std;

struct HocSinh
{
    string hoTen;
    float diemToan;
    float diemVan;
    float diemTB;
};

int main()
{
    HocSinh hs;
    cout << "Nhap ho ten hoc sinh: ";
    getline(cin, hs.hoTen);
    cout << "Nhap diem Toan: ";
    cin >> hs.diemToan;
    cout << "Nhap diem Van: ";
    cin >> hs.diemVan;
    hs.diemTB = (hs.diemToan + hs.diemVan) / 2.0;
    cout << "Hoc sinh: " << hs.hoTen << endl;
    cout << "Diem Toan: " << hs.diemToan << endl;
    cout << "Diem Van: " << hs.diemVan << endl;
    cout << "Diem Trung Binh: " << hs.diemTB << endl;
    return 0;
}

