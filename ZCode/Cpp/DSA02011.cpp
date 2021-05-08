#include <bits/stdc++.h>
using namespace std;
void out(vector<int> a)
{
    cout << a.size();
    // cout << '[';
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i];
    //     if (i < a.size() - 1)
    //     {
    //         cout << ' ';
    //     }
    // }
    // cout << ']';
}
void solve(int n, int d, int *s)
{
    int *sel = new int[n + 1];
    int k = 0, sum = 0, found = 0;
    sel[0] = 1;

    vector<int> kq;

    while (true)
    {
        if (k < n && sel[k] == 1)
        {
            if (sum + s[k] == d)
            {
                found = 1;
                for (int i = 0; i < n; i++)
                {
                    if (sel[i] == 1)
                    {
                        kq.push_back(s[i]);
                    }
                }
                out(kq);
                kq.clear();

                sel[k] = 0;
                return;
            }
            else if (sum + s[k] < d)
                sum += s[k];
            else
            {
                sel[k] = 0;
            }
        }
        else
        {
            k--;
            while (k >= 0 && sel[k] == 0)
                k--;
            if (k < 0)
                break;
            sel[k] = 0;
            sum -= s[k];
        }
        k++;
        if (k < n)
        {
            sel[k] = 1;
        }
    }
    if (found == 0)
        cout << -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int *s = new int[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s, s + n, std::greater<>());
        solve(n, d, s);
        cout << endl;
    }
    return 0;
}