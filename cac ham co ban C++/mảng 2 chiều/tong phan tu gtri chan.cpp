int TongChan(int A[][MAXC], int n, int m) {
    int TC = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (A[i][j] % 2 == 0)
                TC = TC + A[i][j];
    return TC;
}