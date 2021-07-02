#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

long long max(long long a, long long b)
{
    return (a > b ? a : b);
}
long long FirstWay(int x)
{
    return x * 7;
}
long long SecondWay(int y, int z, int d)
{
    return (y * d) + (z * (7 - d));
}
int main()
{
    int t;
    cin >> t;
    int x, y, z, d;
    while (t--)
    {
        cin >> d >> x >> y >> z;
        cout << max(FirstWay(x), SecondWay(y, z, d)) << endl;
    }
    return 0;
}