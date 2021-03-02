#include <bits/stdc++.h>
using namespace std;
void SinhTH(int n, int k)
{
    int x[101]{0};
    int i = 0;
    for (i = 1; i <= k; i++)
    {
        cin>>x[i];
    }
    while (1)
    {
        
        i = k;
        while (i > 0 && x[i] >= n - k + i)
        {
            i--;
        }
        if (i == 0)
        {
            for (i = 1; i <= k; i++)
            {
                cout << i << ' ';
            }
            cout << endl;
            return;
        }
        x[i] = x[i] + 1;
        for (int j = i + 1; j <= k; j++)
        {
            x[j] = x[i] + j - i;
        }
        for (i = 1; i <= k; i++)
        {
            cout << x[i]<<' ';
        }
        cout << endl;
        return;
    }
}
int main()
{   
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        SinhTH(n, k);
    }
    return 0;
}