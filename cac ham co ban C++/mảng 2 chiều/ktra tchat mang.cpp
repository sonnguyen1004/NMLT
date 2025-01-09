bool LaSNT(int n) {
    if (n < 2) return 0; // Khong la SNT
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0; // Khong la SNT
    return 1; // SNT
}

//Đếm số lượng số nguyên tố của ma trận. Nếu số lượng này bằng đúng (n x m) thì ma trận toàn số nguyên tố.
int KiemTra_YT1(int a[][MAXC], int n, int m) {
    int i, j, dem = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (LaSNT(a[i][j]) == 1) dem++;
    if (dem == n * m) return 1;
    return 0;
}
//Đếm số lượng số không phải số nguyên tố của ma trận. Nếu số lượng này bằng 0 thì ma trận toàn số nguyên tố.
int KiemTra_YT2(int a[][MAXC], int n, int m) {
    int i, j, dem = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (LaSNT(a[i][j]) == 0)
                dem++;
    if (dem == 0) return 1;
    return 0;
}
//Tìm xem có phần tử nào không phải số số nguyên tố không. Nếu có thì ma trận không toàn số nguyên tố.
int KiemTra_YT3(int a[][MAXC], int n, int m) {
    int i, j, dem = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (LaSNT(a[i][j]) == 0)
                return 0;
    return 1;
}