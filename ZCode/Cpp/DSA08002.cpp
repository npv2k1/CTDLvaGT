#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    int c;
    cin >> c;
    while (c--)
    {
        string input = "";
        cin >> input;
        if (input == "PUSH")
        {
            int tmp;
            cin >> tmp;
            q.push(tmp);
        }
        if (input == "POP")
        {
            if (!q.empty())
                q.pop();
        }
        if (input == "PRINTFRONT")
        {
            if (!q.empty())
                cout << q.front() << '\n';
            else
                cout << "NONE" << '\n';
        }
    }
}