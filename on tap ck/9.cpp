#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool kiemtraso(long long n)
{
    for (long long i = 2; i * i <= n; i++)
        if (n % (i * i) == 0)
            return false;
    return true;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int l, r, count = 0;
    cin >> l >> r;

    vector<int> a;
    for (int i = l; i <= r; i++)
        if (kiemtraso(i))
            a.push_back(i);

    for (size_t i = 0; i < a.size(); i++)
        for (size_t j = i + 1; j < a.size(); j++)
            if (gcd(a[i], a[j]) == 1)
                count++;

    cout << count << endl;
    return 0;
}