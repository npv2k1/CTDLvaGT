#include <bits/stdc++.h>
using namespace std;
string solve(string str)
{
    stack<int> num;
    stack<char> s;
    string temp = "";
    string result = "";

    for (int i = 0; i < str.length(); i++)
    {
        int count = 0;

        if (str[i] >= '0' && str[i] <= '9')
        {
            while (str[i] >= '0' && str[i] <= '9')
            {
                count = count * 10 + str[i] - '0';
                i++;
            }

            i--;
            num.push(count);
        }

        else if (str[i] == ']')
        {
            temp = "";
            count = 0;

            if (!num.empty())
            {
                count = num.top();
                num.pop();
            }

            while (!s.empty() && s.top() != '[')
            {
                temp = s.top() + temp;
                s.pop();
            }

            if (!s.empty() && s.top() == '[')
                s.pop();

            for (int j = 0; j < count; j++)
                result = result + temp;

            for (int j = 0; j < result.length(); j++)
                s.push(result[j]);

            result = "";
        }

        else if (str[i] == '[')
        {
            if (str[i - 1] >= '0' && str[i - 1] <= '9')
                s.push(str[i]);

            else
            {
                s.push(str[i]);
                num.push(1);
            }
        }

        else
            s.push(str[i]);
    }

    while (!s.empty())
    {
        result = s.top() + result;
        s.pop();
    }

    return result;
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
        cout << solve(s) << endl;
    }
    return 0;
}
