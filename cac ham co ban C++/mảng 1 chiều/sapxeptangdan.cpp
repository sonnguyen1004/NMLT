void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void SapXepTang_InterchangeSort(int a[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                HoanVi(a[i], a[j]);
}