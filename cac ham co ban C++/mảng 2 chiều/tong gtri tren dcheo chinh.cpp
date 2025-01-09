int TongDCChinh(int a[][MAXC], int n, int m) {
    int i, tong;
    tong = 0;
    for (i = 0; i < n; i++)
        tong = tong + a[i][i];
    return tong;
}