#include <bits/stdc++.h>
using namespace std;

int main()
{

    
    deque<int> q;
    int c;
    cin >> c;
    while (c--)
    {
        string input = "";
        cin >> input;
        if (input == "PUSHFRONT")
        {
            int tmp;
            cin >> tmp;
            q.push_front(tmp);
        }
        if (input == "PRINTFRONT")
        {
            if(!q.empty())
                cout<<q.front()<<'\n';
            else
                cout<<"NONE";

        }
        if (input == "POPFRONT"){
            if (!q.empty())
                q.pop_front();
            else
                cout << "NONE";
        }
        if(input=="PUSHBACK")
        {
            int tmp;
            cin>>tmp;
            q.push_back(tmp);
        }
        if (input == "PRINTBACK")
        {
            if (!q.empty())
                cout << q.back() << '\n';
            else
                cout << "NONE";
        }
        if (input == "POPBACK")
        {
            if (!q.empty())
                q.pop_back();
            else
                cout << "NONE";
        }
    }
}