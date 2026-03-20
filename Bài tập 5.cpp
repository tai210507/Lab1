#include <iostream>
#include <string> 
using namespace std;

// Khai báo cấu trúc HocSinh để gom nhóm các thông tin liên quan của một người
struct HocSinh
{
    string hoTen;   
    float diemToan; 
    float diemVan;  
    float diemTB;   
};

// Hàm chính của chương trình
int main()
{
    HocSinh hs;
    
    // 1. Nhập thông tin học sinh
    cout << "Nhap ho ten hoc sinh: ";
    // Sử dụng hàm getline() thay vì 'cin >>' để đọc được toàn bộ dòng chữ (bao gồm cả dấu cách)
    // Nếu dùng 'cin >> hs.hoTen', nó sẽ dừng lại ngay khi gặp dấu cách đầu tiên.
    getline(cin, hs.hoTen); 
    
    cout << "Nhap diem Toan: ";
    cin >> hs.diemToan; // Nhập điểm toán vào trường diemToan của biến hs
    
    cout << "Nhap diem Van: ";
    cin >> hs.diemVan; // Nhập điểm văn vào trường diemVan của biến hs
    
    // 2. Xử lý tính toán
    // Tính điểm trung bình cộng. Chia cho 2.0 để đảm bảo kết quả tính ra là số thực (có thập phân).
    hs.diemTB = (hs.diemToan + hs.diemVan) / 2.0;
    
    // 3. Xuất thông tin ra màn hình
    cout << "Hoc sinh: " << hs.hoTen << endl;
    cout << "Diem Toan: " << hs.diemToan << endl;
    cout << "Diem Van: " << hs.diemVan << endl;
    cout << "Diem Trung Binh: " << hs.diemTB << endl;
    
    return 0; // Kết thúc chương trình
}
