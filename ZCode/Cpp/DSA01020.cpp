#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int i = s.length();
        while (i >= 0)
        {

            if (s[i] == '1')
            {
                s[i] = '0';
                break;
            }
            s[i] = '1';
            i--;
        }
        cout << s << '\n';
    }
    return 0;
}
