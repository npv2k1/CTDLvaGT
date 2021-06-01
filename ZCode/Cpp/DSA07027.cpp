#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCount = 0;
    cin >> testCount;
    while (testCount--)
    {
        int n;
        cin >> n;
        int a[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> res;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[i])
                {
                    res.push_back(a[j]);
                    break;
                }
                else if (j == n - 1)
                {
                    res.push_back(-1);
                    break;
                }
            }
        }
        res.push_back(-1);
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << ' ';
        }
        cout << '\n';
    }
}