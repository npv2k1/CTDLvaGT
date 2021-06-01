#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void in(stack<ll> *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        ll tmp;
        cin >> tmp;
        a->push(tmp);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        stack<ll> A, B, C;
        in(&A, a);
        in(&B, b);
        in(&C, c);
        vector<ll> res;
        while (!A.empty() || !B.empty() || !C.empty())
        {
            ll x = A.top();
            A.pop();

            while (!B.empty() && x < B.top())
            {
                B.pop();
            }

            while (!C.empty() && x < C.top())
            {
                C.pop();
            }
            if (!B.empty() && !C.empty() && x == B.top() && x == C.top())
            {
                res.push_back(x);
                B.pop();
                C.pop();
            }
        }
        if (res.empty())
        {
            cout << "NO";
        }
        else
        {
            for (int i = res.size() - 1; i >= 0; --i)
            {

                cout << res[i] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
/*
1106605	
2021-05-30

20:03:43

DÃY CON CHUNG	RTE	0.34s	1612Kb
*/