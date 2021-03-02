#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
            b.push_back(tmp);
        }
        sort(a.begin(), a.end());
        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                l = i + 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                r = i + 1;
                break;
            }
        }
        cout << l << ' ' << r << endl;
    }
    return 0;
}