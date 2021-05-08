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
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size() / 2; i++)
        {
            cout << a[n - i - 1] << ' ' << a[i] << ' ';
        }
        if (n % 2 != 0)
        {
            cout << a[n / 2];
        }
        cout << endl;
    }
    return 0;
}