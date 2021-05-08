#include <bits/stdc++.h>
using namespace std;
void Gray(int n)
{
    for (int i = 0; i < (1 << n); i++){
        int val = (i ^ (i >> 1));
        bitset<32> b(val);
        string s = b.to_string();
        cout << s.substr(32 - n) << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        Gray(n);
        cout<<'\n';

    }
    return 0;
}