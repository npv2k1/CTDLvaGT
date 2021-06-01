#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss;
        ss<<s;
        stack<string> kq;
        string tmp;
        while (ss >> tmp)
        {
            kq.push(tmp);
            tmp="";
        }
        while(!kq.empty())
        {
            cout<<kq.top()<<' ';
            kq.pop();
        }
        cout<<'\n';
    }
    return 0;
}