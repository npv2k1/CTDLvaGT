#include <bits/stdc++.h>
using namespace std;
int t, n, a[100], xuoi[100], nguoc[100], X[100], dem;
int max=0;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!a[j] && !xuoi[i - j + n] && !nguoc[i + j - 1])
        {
            X[i] = j;
            a[j] = 1;
            xuoi[i - j + n] = 1;
            nguoc[i + j - 1] = 1;
            if (i == n)
                dem++;
            else
                Try(i + 1);
            a[j] = 0;
            xuoi[i - j + n] = 0;
            nguoc[i + j - 1] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        dem = 0;
        cin >> n;
        Try(1);
        cout << dem << endl;
    }

    return 0;
}
