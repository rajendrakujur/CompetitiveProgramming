#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string binary(int number)
{
    string result;
    int temp;
    result.clear();
    while (number != 0)
    {
        temp = number % 2;
        if (temp == 0)
        {
            result.push_back('0');
        }
        if (temp == 1)
        {
            result.push_back('1');
        }
        number /= 2;
    }
    return result;
}

int max(string b[], int n)
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i].size() > m)
            m = b[i].size();
    }
    return m;
}

int operation(string b[], int size, int index, int k)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i][index] == '1')
        {
            total++;
        }
    }
    if (total % k != 0)
    {
        return (total / k) + 1;
    }
    else
        return total / k;
}
int main()
{
    int t, n, k, max_Size;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        string b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = binary(a[i]);
        }
        max_Size = max(b, n);
        int res = 0;
        for (int i = 0; i < max_Size; i++)
        {
            res += operation(b, n, i, k);
        }
        cout << res << endl;
    }
    return 0;
}