#include <bits/stdc++.h>
using namespace std;
void out(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < m; i++)
        {
            int tmp;
            cin >> tmp;
            b.push_back(tmp);
        }
        vector<int> giao, hop;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    giao.push_back(a[i]);
                    b[j] = -1;
                    break;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (b[i] != -1)
            {
                a.push_back(b[i]);
            }
        }
        sort(a.begin(), a.end());
        sort(giao.begin(), giao.end());
        out(a);
        out(giao);
    }
    return 0;
}