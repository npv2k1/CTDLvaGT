#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCount = 0;
    cin >> testCount;
    while (testCount--)
    {
        queue<long long> q;
        int c;
        cin >> c;
        while (c--)
        {
            int s;
            cin >> s;
            switch (s)
            {
            case 1:
                cout << q.size() << '\n';
                break;
            case 2:
                if (q.empty())
                    cout << "YES";
                else
                    cout << "NO";
                cout<<'\n';

                break;
            case 3:
                long long tmp;
                cin >> tmp;
                q.push(tmp);
                break;
            case 4:
                if (!q.empty())
                    q.pop();
                break;
            case 5:
                if (!q.empty())
                {
                    cout<<q.front()<<'\n';
                }
                else{
                    cout<<-1<<'\n';
                }
                break;
            case 6:
                if (!q.empty())
                {
                    cout << q.back()<<'\n';
                }
                else
                {
                    cout << -1<<'\n';
                }
                break;

            default:
                break;
            }
        }
    }
}