#include <iostream>
#include <cstdint>
using namespace std;

void kiemtramanhdat(int** a, int k, int l, int &min)
{
    int sum = 0;
    for (int i = k - 1; i <= k + 1; i++)
        for (int j = l - 1; j <= l + 1; j++)
            sum += a[i][j];
    min = (min < sum) ? min : sum;
}

int main()
{
    int m, n, min = INT32_MAX;
    cin >> m >> n;
    int** a = new int*[m];
    for (int i = 0; i < m; i++)
        a[i] = new int[n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int k = 1; k < m - 1; k++)
        for (int l = 1; l < n - 1; l++)
            kiemtramanhdat(a, k, l, min);
    cout << min;
    return 0;
}