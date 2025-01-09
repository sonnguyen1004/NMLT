//
// Created by sonde on 09/01/2025.
//
#include <iostream>
using namespace std;

int main(){
    int a[3][3], b[10], n, check[3][3] = {0};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int k = 0; k < n; k++)
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (b[k] == a[i][j])
                    check[i][j]++;

    for (int i = 0; i < 3; i++)
    {
        if (check[i][0]*check[i][1]*check[i][2] > 0)
        {
            cout << "Yes";
            return 0;
        }
        if (check[0][i]*check[1][i]*check[2][i] > 0)
        {
            cout << "Yes";
            return 0;
        }
    }
    if (check[0][0]*check[1][1]*check[2][2] > 0)
    {
        cout << "Yes";
        return 0;
    }
    if (check[2][0]*check[1][1]*check[0][2] > 0)
    {
        cout << "Yes";
        return 0;
    }
    cout << "No";
    return 0;
}