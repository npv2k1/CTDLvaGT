#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s, m;
        cin >> n >> s >> m;

        int res = s / 7;
        if (m * s > n * (s - res))
            cout << -1 << endl;
        else
        {
            if ((m * s) % n == 0)
                cout << (m * s) / n << endl;
            else
                cout << (m * s) / n + 1 << endl;
        }
    }
    return 0;
}
/**
 * @brief 
 * !notme
 * !AC
 * 1181573	
2021-06-06

13:54:09

MUA LƯƠNG THỰC	AC	0.01s	1548Kb	C/C++
 */
