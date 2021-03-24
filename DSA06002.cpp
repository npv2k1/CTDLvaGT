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
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
            b.push_back(abs(tmp - k));
        }

        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] == -1)
                {
                    continue;
                }
                if (abs(a[j] - k) == b[i])
                {
                    cout << a[j] << ' ';
                    a[j] = -1;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}