#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ulli> a;
        vector<ulli> b;
        for (int i = 0; i < n; i++)
        {
            ulli tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ulli tmp;
            cin >> tmp;
            b.push_back(tmp);
        }

        int i = n - 2;
        while (1)
        {
            if (b[i] == a[i])
            {
                if (i == n - 2)
                {
                    cout << n << endl;
                }
                else
                {
                    cout << i + 2 << endl;
                }

                break;
            }
            i--;
        }
    }
    return 0;
}