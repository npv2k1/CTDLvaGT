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
        cin >> s;
        int maxLength = 0;
        int d=0;
        vector<char> res;
        bool check=false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                res.push_back(s[i]);
                if (d > maxLength)
                {
                    maxLength = d;
                    d = 0;
                }
                
            }
            else
            {
                if(res.size()==0){
                    continue;
                }
                if (res[res.size() - 1] == '(')
                {
                    res.pop_back();
                    d+=2;                    
                }
            }
        }
        cout << maxLength << endl;
        res.clear();
    }
    return 0;
}