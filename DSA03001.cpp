#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m[10]={1,2,5,10,20,50,100,200,500,1000};
        int n;
        cin>>n;
        int c=0;
        int d=9;        
        while(n>0){
            if(n-m[d]>=0){
                c+=1;
                n -= m[d];
            }
            else{
                d-=1;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}