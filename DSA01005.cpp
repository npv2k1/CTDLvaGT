#include <bits/stdc++.h>
using namespace std;
void SinhHV(int x[], int n)
{
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        x[i] = i;
    }
    while (1)
    {
        for (i = 1; i <= n; i++)
        {
            cout << x[i];
        }
        cout << ' ';
        i = n - 1;
        while (i > 0 && x[i] > x[i + 1])
        {
            i--;
        }
        if (i == 0)
        {
            cout<<endl;
            return;
        }
        int k = n;
        while (x[k] < x[i])
        {
            k--;
        }
        int tmp = x[k];
        x[k] = x[i];
        x[i] = tmp;

        int j = i + 1;
        int r = n;
        while (j < r)
        {
            int tmp = x[j];
            x[j] = x[r];
            x[r] = tmp;
            j++, r--;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x[10] = {0};
        int n;cin>>n;
        SinhHV(x, n);
    }
    return 0;
}
