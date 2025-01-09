#include <iostream>
#include <cmath>
using namespace std;

// Kiểm tra số nguyên tố
bool checknt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

// Nhập mảng
void Nhap(int a[], int &N)
{
    cout << "Nhap n: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

// Xuất mảng
void Xuat(int a[], int N)
{
    cout << "Mang da nhap: ";
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Tìm kiếm một giá trị trong mảng
int TimKiem(int A[], int N, int x)
{
    for (int vt = 0; vt < N; vt++)
        if (A[vt] == x)
            return vt;
    return -1;
}

// Tính tổng số nguyên tố trong mảng
int TongNT(int a[], int N)
{
    int tong = 0;
    for (int i = 0; i < N; i++)
        if (checknt(a[i]) == true)
            tong++;
    return tong;
}

// Đếm số chẵn trong mảng
int DemChan(int A[], int N)
{
    int dem = 0;
    for (int i = 0; i < N; i++)
        if (A[i] % 2 == 0)
            dem++;
    return dem;
}

int main() {
    int N;
    int a[100]; // Giả sử bạn nhập tối đa 100 phần tử

    // Nhập và kiểm tra một số nguyên tố
    int n;
    cout << "Nhap so n de kiem tra: ";
    cin >> n;
    if (checknt(n)) {
        cout << "YES" << endl; // Số nguyên tố
    } else {
        cout << "NO" << endl;  // Không phải số nguyên tố
    }

    // Nhập mảng
    Nhap(a, N);

    // Xuất mảng
    Xuat(a, N);

    // Tìm kiếm một phần tử trong mảng
    int x;
    cout << "Nhap gia tri x de tim trong mang: ";
    cin >> x;
    int index = TimKiem(a, N, x);
    if (index != -1) {
        cout << "Gia tri " << x << " xuat hien tai vi tri: " << index << endl;
    } else {
        cout << "Gia tri " << x << " khong co trong mang." << endl;
    }

    // Tính tổng số nguyên tố trong mảng
    int tongNT = TongNT(a, N);
    cout << "Tong so nguyen to trong mang: " << tongNT << endl;

    // Đếm số chẵn trong mảng
    int demChan = DemChan(a, N);
    cout << "So luong so chan trong mang: " << demChan << endl;

    return 0;
}
