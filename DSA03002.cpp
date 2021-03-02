#include <bits/stdc++.h>
using namespace std;
int s2i(string s)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        res = (s[i] - '0') + 10 * res;
    }
    return res;
}
int main()
{
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '5')
        {
            a[i] = '6';
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '5')
        {
            b[i] = '6';
        }
    }
    int sum2 = s2i(a) + s2i(b);
    int sum1 = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '6')
        {
            a[i] = '5';
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '6')
        {
            b[i] = '5';
        }
    }
    sum1 = s2i(a) + s2i(b);
    if (sum1 > sum2)
    {
        cout << sum2 << ' ' << sum1;
    }
    else
    {
        cout << sum1 << ' ' << sum2;
    }
    cout << endl;

    return 0;
}