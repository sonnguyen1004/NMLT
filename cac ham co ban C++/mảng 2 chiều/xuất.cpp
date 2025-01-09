void xuatMang(int a[][COL], int m, int n)
{
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout << a[i][j] << "\t";
    }
cout << endl;

}
}

/* OR
void XuatMaTran(int A[][MAXC], int & n, int & m){
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++)
cout << a[i][j] << " ";
cout << endl;
}
}
 */