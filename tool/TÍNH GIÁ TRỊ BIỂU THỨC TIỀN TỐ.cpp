#include <bits/stdc++.h>
using namespace std;

bool isOperator(char x)
{
    return (x == '+' || x == '-' || x == '*' || x == '/') ? true : false;
}

int solve(string s)
{
    stack<int> st;
    int len = s.length();

    for (int i = len; i >= 0; i--)
    {
        if (isOperator(s[i]) == false)
        {
            st.push(s[i] - '0');
        }
        else
        {
            int s1 = st.top();
            st.pop();
            int s2 = st.top();
            st.pop();

            int tmp;
            if (s[i] == '+')
                tmp = s1 + s2;
            else if (s[i] == '-')
                tmp = s1 - s2;
            else if (s[i] == '*')
                tmp = s1 * s2;
            else
                tmp = s1 / s2;
            st.push(tmp);
        }
    }
    return st.top();
}

int main()
{
    int t;
    cin >> t;
    //cin.ignore(1);
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
