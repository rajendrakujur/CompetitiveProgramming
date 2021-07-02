#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x1, x2, y1, y2, z1, z2;
    while (t--)
    {
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        if (x1 <= x2 && y1 <= y2 && z1 >= z2)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}