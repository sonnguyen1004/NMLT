bool Them(int a[], int &n, int k, int x) {
    if (k >= 0 && k <= n) {
        for (int i = n; i > k; i--)
            a[i] = a[i - 1];
        a[k] = x;
        n++;
        return 1;
    }
    return 0;
}

bool Xoa(int a[], int &n, int k) {
    if (k >= 0 && k < n) {
        for (int i = k; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
        return 1;
    }
    return 0;
}

