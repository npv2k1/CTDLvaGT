#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

bool isOperator(char x)
{
    return (x == '+' || x == '-' || x == '*' || x == '/') ? true : false;
}

int solve(string xau)
{
    stack<int> s;
    int len = xau.length();

    for (int i = len; i >= 0; i--)
    {
        if (isOperator(xau[i]) == false)
        {
            s.push(xau[i] - '0');
        }
        else
        {
            int xau1 = s.top();
            s.pop();
            int xau2 = s.top();
            s.pop();

            int temp;
            if (xau[i] == '+')
                temp = xau1 + xau2;
            else if (xau[i] == '-')
                temp = xau1 - xau2;
            else if (xau[i] == '*')
                temp = xau1 * xau2;
            else
                temp = xau1 / xau2;
            s.push(temp);
        }
    }
    return s.top();
}

int main()
{
    int soTest;
    cin >> soTest;
    //cin.ignore(1);
    while (soTest--)
    {
        string xau;
        cin >> xau;
        cout << solve(xau) << endl;
    }
    return 0;
}
