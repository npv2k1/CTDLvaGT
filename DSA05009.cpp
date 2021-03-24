#include <bits/stdc++.h>
using namespace std;
void check(vector<int> a,int n,int sum){
    int dsum = 0;
    for (int i = 0; i < n; i++)
    {
        dsum = a[i];
        for (int j = 0; j < n; j++)
        {
            dsum += a[j];
            if (dsum == sum / 2)
            {
                cout << "YES";
                return;
            }
        }
    }
    cout<<"NO";
    return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> a;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
           int tmp;
           cin>>tmp;
           a.push_back(tmp);
           sum+=tmp;
        }
        if(sum%2!=0){
            cout<<"NO";
        }
        else{
              
            check(a,n,sum);
            
        }
        cout<<endl;
        
    }
    return 0;
}
/**
 * @brief 
 * Bài này Đang sai . //! WA
 * 
 */