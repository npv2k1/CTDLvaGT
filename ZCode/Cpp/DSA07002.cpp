#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> a;
    long long t;
    cin >> t;
    while (t--)
    {
        string input = "";
        cin >> input;
        if (input == "PUSH")
        {
            int tmp;
            cin >> tmp;
            cin.ignore();
            a.push(tmp);
        }
        if (input == "POP")
        {
            if (!a.empty())
            {
                a.pop();
            }
        }
        if (input == "PRINT")
        {
            if (!a.empty())
            {
                cout << a.top();
            }
            else
                cout << "NONE";
            cout << '\n';
        }
    }
}