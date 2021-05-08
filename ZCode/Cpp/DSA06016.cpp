#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        vector<int> b;
        for (int i = 0; i < m; i++)
        {
            int tmp;
            cin >> tmp;
            b.push_back(tmp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout<<a[n-1]*b[0]<<endl;
    }
    return 0;
}