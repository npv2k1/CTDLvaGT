#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        if (a[0] > k)
        {
            cout << -1;
        }
        else if (k >= a[n - 1])
        {
            cout << n;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {

                if (a[i] > k)
                {
                    cout << i << ' ';
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}