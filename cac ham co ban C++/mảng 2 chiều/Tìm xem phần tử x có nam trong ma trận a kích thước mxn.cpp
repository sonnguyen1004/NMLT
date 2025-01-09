int TimKiem(int a[][MAXC], int n, int m,int x)
{
for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
        if (a[i][j] == x)
            return 1;
return 0;
}