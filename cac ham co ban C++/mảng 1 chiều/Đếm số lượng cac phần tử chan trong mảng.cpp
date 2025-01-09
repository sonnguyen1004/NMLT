#include <stdio.h>
void NhapMang(int A[], int &N) ;
void XuatMang(int A[], int N);
void Demsochan(int A[], int N);

int main() {
    int a[100], n, count;

    NhapMang (a, n) ;
    XuatMang(a, n);

    count = Demsochan(a, n);
    printf("so ptu chan là %
    d", count);
           }
int DemSoChan(int A[], int N) {
    int c = 0;
    for (int i = 0; i < n; i++)
        if (A[i] % 2 == 0)
            c++;
    return c;
}