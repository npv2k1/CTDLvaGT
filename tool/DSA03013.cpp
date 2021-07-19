#include <bits/stdc++.h>
using namespace std;

bool check(string s, int D)
{
    int cs[30] = {0};
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        int x = (int)s[i] - (int)'A';
        cs[x]++;
    }

    sort(cs, cs + 26, greater<int>());
    for (int i = 0; i < 26; i++)
    {
        int f = cs[i];
        if (f > 0)
        {
            for (int j = 0; j < f; j++)
            {
                if (i + j * D > len - 1)
                    return 0;
            }
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int D;
        cin >> D >> s;
        if (check(s, D) == true)
            cout << 1;
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}
/**
 * @brief 
 * !notme
 * !AC
 */
