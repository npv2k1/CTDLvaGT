#include <bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = ((a[i] * i) % mod + sum % mod) % mod;
        }
        cout << sum << endl;
    }
    return 0;
}