#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<< ' ';
        }
        cout<<endl;
        

    }
    return 0;
}