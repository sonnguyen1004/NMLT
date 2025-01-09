void nhapMang(int a[][COL], int &m, int &n)
{
cout << "Nhap so dong: ";
cin >> m;
cout << "Nhap so cot: ";
cin >> n;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
cout << "a[" << i << "][" << j << "] = ";
cin >> a[i][j];
}
}
}

/* OR
void NhapMaTran(int A[][MAXC], int & n, int& m){
cin >> n >> m;
for (int i = 0; i < n; i++)
for (int j = 0; j < m; j++)
cin >> a[i][j];
}
 */