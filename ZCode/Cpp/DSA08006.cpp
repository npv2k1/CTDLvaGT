#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ulli x=9;
        while(true){
            
            if(x % n == 0)
                cout << x << endl;
                break;
            else if (x % n == 0){
                cout << x << endl;
                break;
            }
            
            else{                
                x = x * 10;
                
               
            }
        }
    }
    return 0;
}