void InDuongCheoChinh(int A[][MAXC], int n) {
    int sum=0;
    for (int i = 0; i < n; i++)
        std::cout << A[i][i] << " ";
}

void InDuongCheoPhu(int A[][MAXC], int n) {
    int sum=0;
    for (int i = 0; i < n; i++)
        std::cout << A[i][n-1-i] << " ";
}