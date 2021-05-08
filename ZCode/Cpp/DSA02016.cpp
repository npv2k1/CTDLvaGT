#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int n, a[MAX], xuoi[MAX], nguoc[MAX], arr[MAX], dem;

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!a[j] && !xuoi[i - j + n] && !nguoc[i + j - 1])
        {
            arr[i] = j;
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
/*
Xếp quân hậu
*/