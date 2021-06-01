#include <bits/stdc++.h>
using namespace std;
void show(stack<int> tmp)
{

    stack<int> a = tmp;
    vector<int> vt;
    while (!a.empty())
    {
        vt.push_back(a.top());       
        a.pop();
    }
    for (int i = vt.size()-1; i >=0; i--)
    {
        cout << vt[i] << ' ';
    }
    
    cout << '\n';
}
int main()
{
    stack<int> a;
    string input = "";
    while (true)
    {
        stringstream ss;
        string tmp;
        getline(cin, tmp);

        if (tmp == "")
        {
            break;
        }
        ss << tmp;
        ss >> input;
        if (input == "push")
        {
            int tmp;
            ss >> tmp;
            a.push(tmp);
        }
        if (input == "pop")
        {
            a.pop();
        }
        if (input == "show")
        {
            if (!a.empty())
                show(a);
            else
                cout << "empty" << '\n';
        }
    }
}