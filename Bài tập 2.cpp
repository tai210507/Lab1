#include <iostream>
using namespace std;

// Khai báo cấu trúc lưu trữ dữ liệu cho Phân Số
struct PhanSo
{
    int tu;  
    int mau; 
};

// Hàm nhập dữ liệu cho phân số
void nhapPhanSo(PhanSo &ps)
{
    cin >> ps.tu; 
    
    // Vòng lặp do-while để bắt buộc người dùng nhập mẫu số khác 0
    do
    {
        cin >> ps.mau;
    } while (ps.mau == 0); 
}

// Hàm in phân số ra màn hình
void xuatPhanSo(PhanSo ps)
{
    cout << ps.tu << "/" << ps.mau; // In theo định dạng Tử/Mẫu
}

// Hàm tính giá trị thực phân số ra số thập phân
double giaTri(PhanSo ps)
{
    // Ép kiểu (double) cho tử số để kết quả phép chia là số thực (có phần thập phân)
    return (double)ps.tu / ps.mau;
}

// Hàm chính của chương trình
int main()
{
    PhanSo ps1, ps2; 
    
    
    nhapPhanSo(ps1);
    nhapPhanSo(ps2);
    
    // So sánh giá trị thập phân của hai phân số
    if (giaTri(ps1) > giaTri(ps2))
    {
        // Nếu phân số 1 lớn hơn, in phân số 1
        xuatPhanSo(ps1);
    } 
    else if (giaTri(ps1) < giaTri(ps2))
    {
        // Nếu phân số 2 lớn hơn, in phân số 2
        xuatPhanSo(ps2);
    } 
    else
    {
        // Nếu giá trị bằng nhau
        cout << "Hai phan so bang nhau";
    }
    
    cout << endl; 

    return 0; // Kết thúc chương trình
}
