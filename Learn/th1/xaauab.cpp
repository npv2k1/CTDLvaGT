#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
string s = "";

vector<string> res;

void Solve(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - k)
        {
            for (int m = 1; m <= n - k; m++)
            {
                if (m == 1 && a[m] == 1)
                {
                    string tmp = s;
                    for (int p = 1; p <= n - k; p++)
                    {
                        if (a[p])
                            tmp += "B";
                        else
                            tmp += "A";
                    }
                    res.push_back(tmp);
                }
                if (m == n - k && a[m] == 1)
                {
                    string tmp = "";
                    for (int p = 1; p <= n - k; p++)
                    {
                        if (a[p])
                            tmp += "B";
                        else
                            tmp += "A";
                    }
                    tmp += s;
                    res.push_back(tmp);
                }
                if (a[m] && a[m - 1] && m > 1)
                {
                    string tmp = "";
                    for (int p = 1; p <= n - k; p++)
                    {
                        if (p == m)
                            tmp += s;
                        if (a[p])
                            tmp += "B";
                        else
                            tmp += "A";
                    }
                    res.push_back(tmp);
                }
            }
        }
        else
            Solve(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        s += "A";
    }

    Solve(1);
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}
