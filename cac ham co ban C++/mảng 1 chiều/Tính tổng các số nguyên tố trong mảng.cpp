int TongNT(int A[], int N)
{
int tong = 0;
for (int i = 0; i < n; i++)
    if (kiem_tra_so_nguyen_to(a[i]) == true)
        tong++;
return tong;

}