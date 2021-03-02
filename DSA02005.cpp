#include <bits/stdc++.h>
using namespace std;
void SinhHV(string x)
{
    int i = 0;
    int n=x.length();
    while (1)
    {
        for (i = 0; i < n; i++)
        {
            cout << x[i];
        }
        cout << ' ';
        i = n - 1;
        while (i >= 0 && x[i] > x[i + 1])
        {
            i--;
        }
        if (i == -1)
        {
            cout << endl;
            return;
        }
        int k = n-1;
        while (x[k] < x[i])
        {
            k--;
        }
        char tmp = x[k];
        x[k] = x[i];
        x[i] = tmp;

        int j = i + 1;
        int r = n-1;
        while (j < r)
        {
            char tmp = x[j];
            x[j] = x[r];
            x[r] = tmp;
            j++, r--;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        SinhHV(s);
    }
    return 0;
}
