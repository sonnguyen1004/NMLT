// Hàm kiểm tra SNT
int LaSNT(int n) {
    int flag = 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0) // áp dụng kỹ thuật cờ hiệu
            flag = 1;
    if (flag == 0) return 1; // SNT
    return 0; // Không phải SNT
}
//Tìm xem có phần tử nào không phải số nguyên tố không. Nếu có thì mảng không toàn số nguyên tố.
int KiemTra_YT3(int a[], int n) {
    for (int i = 0; i < n; i++)
        if (LaSNT(a[i]) == 0)
            return 0;
    return 1;
}
//Đếm số lượng số ngtố của mảng. Nếu số lượng này bằng đúng n thì mảng toàn nguyên tố.
int KiemTra_YT1(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (LaSNT(a[i]) == 1)
            dem++;
    if (dem == n)
        return 1;
    return 0;
}
//Đếm số lượng số không phải ngtố của mảng. Nếu số lượng này bằng 0 thì mảng toàn nguyên tố.
    int KiemTra_YT2(int a[], int n){
        int dem = 0;
        for (int i = 0; i < n; i++)
            if (LaSNT(a[i]) == 0)
                dem++;
        if (dem == 0)
            return 1;
        return 0;
    }