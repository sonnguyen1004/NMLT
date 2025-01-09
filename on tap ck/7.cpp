#include <bits/stdc++.h>
using namespace std;
long long a[200001],n,d=0;

int main(){
    cin >> n; // Nhập giá trị N
    
    // Bước 1: Tính số lượng các cặp (a, b) sao cho ab = i cho tất cả i từ 1 đến 200000.
    for (int i = 1; i <= 200000; i++) {
        for (int j = 1; j <= 200000 / i; j++) {
            a[i * j]++; // Nếu i * j = k, thì tăng số lượng cách chọn (a, b) sao cho ab = k
        }
    }

    // Bước 2: Đếm số lượng các cặp (a, b, c, d) sao cho ab + cd = n.
    for (int i = 1; i <= n; i++) {
        d = d + ((a[i]) * (a[n - i])); // Đếm tất cả các cách chọn (a, b) sao cho ab = i và (c, d) sao cho cd = n - i
    }

    cout << d; // In kết quả
    return 0;
}
