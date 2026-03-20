#include <iostream>
#include <cmath> 
using namespace std;

// Khai báo cấu trúc dữ liệu cho Phân Số
struct PhanSo
{
    int tu, mau; 
};

// Hàm tìm Ước Chung Lớn Nhất (UCLN)
int UCLN(int a, int b)
{
    a = abs(a); b = abs(b); 
    while (b != 0)
    {
        int temp = a % b; 
        a = b;
        b = temp;
    }
    return a; // Khi b = 0 thì a chính là UCLN
}

// Hàm nhập phân số
void nhapPhanSo(PhanSo &ps)
{
    // Yêu cầu nhập tử số
    cin >> ps.tu; 
    
    // Yêu cầu nhập mẫu số và kiểm tra điều kiện mẫu số phải khác 0
    do
    {
        cin >> ps.mau;
        if (ps.mau == 0) 
            cout << "Mau so phai khac 0. Vui long nhap lai!\n";
    } while (ps.mau == 0); // Lặp lại việc nhập nếu người dùng cố tình nhập mẫu bằng 0
}

// Hàm rút gọn phân số
// Truyền tham chiếu (&ps) để trực tiếp thay đổi phân số gốc
void rutGon(PhanSo &ps)
{
    int ucln = UCLN(ps.tu, ps.mau); // Tìm UCLN của tử và mẫu
    
    // Chia cả tử và mẫu cho UCLN để rút gọn
    ps.tu /= ucln;  
    ps.mau /= ucln; 
    
    // Chuẩn hóa dấu: Nếu mẫu số âm, ta chuyển dấu âm lên tử số cho đúng chuẩn toán học
    if (ps.mau < 0)
    {
        ps.tu = -ps.tu;
        ps.mau = -ps.mau;
    }
}

// Hàm xuất (in) phân số ra màn hình
// Truyền tham trị (ps) vì ta chỉ cần đọc giá trị để in, không cần thay đổi
void xuatPhanSo(PhanSo ps)
{
    // Xử lý các trường hợp đặc biệt cho đẹp mắt
    if (ps.mau == 1) 
        cout << ps.tu; // Nếu mẫu là 1, in ra dạng số nguyên (VD: 5/1 -> 5)
    else if (ps.tu == 0) 
        cout << 0;     // Nếu tử là 0, in ra 0
    else 
        cout << ps.tu << "/" << ps.mau; // Trường hợp bình thường in dạng Tử/Mẫu
        
    cout << endl; // Xuống dòng sau khi in xong
}

// Hàm chính của chương trình
int main()
{
    PhanSo ps; // Khởi tạo một biến phân số
    
    nhapPhanSo(ps); // Gọi hàm nhập
    rutGon(ps);     // Gọi hàm rút gọn
    xuatPhanSo(ps); // Gọi hàm xuất ra màn hình
    
    return 0; // Kết thúc chương trình thành công
}
