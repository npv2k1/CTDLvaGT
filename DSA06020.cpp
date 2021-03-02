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
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        vector<int>::iterator itr = find(a.begin(), a.end(), k);

        if (itr != a.cend())
        {
            cout<<1;//<< distance(a.begin(), itr)+1;
        }
        else
        {
            cout << -1;
        }
        cout<<endl;
    }
    return 0;
}