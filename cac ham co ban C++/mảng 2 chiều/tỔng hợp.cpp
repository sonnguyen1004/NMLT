#include <iostream>
#include <cmath>
using namespace std;

#define MAXR 100 // Định nghĩa số dòng tối đa
#define MAXC 100 // Định nghĩa số cột tối đa

void nhapMang(int a[][MAXC], int &m, int &n)
{
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    for (int i = 0; i < m; i++) // Sửa lại việc duyệt qua số dòng (m) và cột (n)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void xuatMang(int a[][MAXC], int m, int n)
{
    for (int i = 0; i < m; i++) // Sửa lại việc duyệt qua số dòng (m) và cột (n)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int TimKiem(int a[][MAXC], int n, int m, int x)
{
    for (int i = 0; i < n; i++) // Duyệt qua từng dòng và cột
        for (int j = 0; j < m; j++)
            if (a[i][j] == x)
                return 1; // Nếu tìm thấy trả về 1
    return 0; // Nếu không tìm thấy trả về 0
}

int TongChan(int a[][MAXC], int n, int m)
{
    int TC = 0;
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử trong mảng
        for (int j = 0; j < m; j++)
            if (a[i][j] % 2 == 0) // Nếu phần tử là số chẵn
                TC = TC + a[i][j]; // Cộng vào tổng
    return TC; // Trả về tổng các số chẵn
}

int main()
{
    int a[MAXR][MAXC]; // Mảng hai chiều
    int m, n; // Số dòng và số cột
    int x;

    // Nhập mảng
    nhapMang(a, m, n);

    // Xuất mảng
    cout << "Mang da nhap: " << endl;
    xuatMang(a, m, n);

    // Tìm kiếm một giá trị trong mảng
    cout << "Nhap gia tri x de tim trong mang: ";
    cin >> x;
    if (TimKiem(a, m, n, x))
    {
        cout << "Gia tri " << x << " co trong mang." << endl;
    }
    else
    {
        cout << "Gia tri " << x << " khong co trong mang." << endl;
    }

    // Tính tổng các số chẵn trong mảng
    int tongChan = TongChan(a, m, n);
    cout << "Tong cac so chan trong mang: " << tongChan << endl;

    return 0;
}
