int Max(int a[], int n) {
    int Max = a[0];
    for (int i = 1; i < n; i++)
        if (Max < a[i]) // áp dụng kỹ thuật lính canh
            Max = a[i];
    return Max;
}
int Min(int a[], int n) {
    int Min = a[0];
    for (int i = 1; i < n; i++)
        // áp dụng kỹ thuật lính canh
            if (Min > a[i]) Min = a[i];
    return Min;
}