#include <iostream>
using namespace std;
int main()
{
    char l1[3], l2[3];
    cin >> l1 >> l2;
    char grid[2][2] = { {l1[0], l1[1]}, {l2[0], l2[1]} };
    bool canConnect = false;
    if ((grid[0][0] == '#' && grid[0][1] == '#') || (grid[1][0] == '#' && grid[1][1] == '#')) {
        canConnect = true;
    }
    if ((grid[0][0] == '#' && grid[1][0] == '#') || (grid[0][1] == '#' && grid[1][1] == '#')) {
        canConnect = true;
    }
    if (canConnect)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}