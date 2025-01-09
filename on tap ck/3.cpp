#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int h, w, excess = 0, min = INT32_MAX;
    cin >> h >> w;  // Nhập vào số hàng và số cột của kho
    int a[h][w];  // Khai báo mảng 2 chiều để chứa số thùng trong từng chồng

    // Nhập dữ liệu và tìm số thùng ít nhất (min)
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];  // Nhập số thùng trong chồng (i, j)
            min = (min > a[i][j]) ? a[i][j] : min;  // Cập nhật giá trị min nếu số thùng trong chồng hiện tại nhỏ hơn min
        }

    // Tính tổng số thùng cần khiêng (excess)
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            excess += a[i][j] - min;  // Cộng thêm hiệu giữa số thùng hiện tại và min

    cout << excess;  // In ra kết quả
    return 0;
}
