#include <iostream>
using namespace std;

// Khai báo cấu trúc lưu trữ Ngày, Tháng, Năm
struct NgayThangNam 
{
    int ngay, thang, nam;
};

// Hàm kiểm tra xem một năm có phải là năm nhuận hay không
// Trả về true nếu là năm nhuận, false nếu không phải
bool laNamNhuan(int nam) 
{
    // Năm nhuận là năm chia hết cho 400, HOẶC chia hết cho 4 nhưng KHÔNG chia hết cho 100
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

// Hàm xác định số ngày tối đa trong một tháng bất kỳ
int soNgayTrongThang(int thang, int nam) 
{
    switch (thang) 
    {
        // Các tháng có 31 ngày
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        // Các tháng có 30 ngày
        case 4: case 6: case 9: case 11:
            return 30;
        // Riêng tháng 2 cần kiểm tra năm nhuận
        case 2:
            if (laNamNhuan(nam)) return 29;
            else return 28;
        default:
            return 0; // Trả về 0 nếu tháng nhập vào không hợp lệ
    }
}

// Hàm xử lý logic để tìm ngày kế tiếp
NgayThangNam timNgayKeTiep(NgayThangNam hienTai) 
{
    NgayThangNam keTiep = hienTai; // Tạo biến mới, sao chép mốc thời gian hiện tại
    
    keTiep.ngay++; // Bước 1: Thử cộng thêm 1 ngày
    
    // Bước 2: Kiểm tra xem ngày vừa cộng có bị lố giới hạn của tháng đó không
    // Ví dụ: Ngày 31/1 cộng thêm 1 thành 32/1 -> Lố giới hạn (31)
    if (keTiep.ngay > soNgayTrongThang(keTiep.thang, keTiep.nam)) 
    {
        keTiep.ngay = 1; // Quay trở lại ngày mùng 1
        keTiep.thang++;  // Tăng lên tháng tiếp theo
    }
    
    // Bước 3: Kiểm tra xem tháng có bị lố giới hạn của năm không
    // Ví dụ: Tháng 12 tăng thêm 1 thành tháng 13 -> Lố giới hạn
    if (keTiep.thang > 12) 
    {
        keTiep.thang = 1; // Quay trở lại tháng 1
        keTiep.nam++;     // Bước sang năm tiếp theo
    }
    
    return keTiep; // Trả về kết quả cuối cùng
}

int main() 
{
    NgayThangNam hienTai;
    
    // Nhập dữ liệu ngày, tháng, năm
    cout << "Nhap lan luot ngay, thang, nam (cach nhau boi khoang trang): ";
    cin >> hienTai.ngay >> hienTai.thang >> hienTai.nam;
    
    // Tìm ngày kế tiếp
    NgayThangNam keTiep = timNgayKeTiep(hienTai);
    
    // In kết quả ra màn hình
    cout << "Ngay ke tiep la: " << keTiep.ngay << "/" << keTiep.thang << "/" << keTiep.nam << endl;
    
    return 0;
}
