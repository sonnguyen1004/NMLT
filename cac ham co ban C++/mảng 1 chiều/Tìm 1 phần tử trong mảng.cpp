int TimKiem(int A[], int n, int x)
{
for (int vt = 0; vt < n; vt++)
    if (A[vt] == x)
        return vt;
return -1;
}