#include <cstdint>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int duoi[n], tren[n], maxduoi = 0, mintren = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> duoi[i];
        maxduoi = (maxduoi > duoi[i]) ? maxduoi : duoi[i];
    }    
    for (int i = 0; i < n; i++)
    {
        cin >> tren[i];
        mintren = (mintren < tren[i]) ? mintren : tren[i];
    }
    cout << ((mintren - maxduoi + 1 >= 0) ? mintren - maxduoi + 1 : 0);
    return 0;
}