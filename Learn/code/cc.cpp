#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ulli ;
void inArr(ulli *a, ulli n)
{
    for (ulli i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        vector<ulli> res;
        ulli a, b, c;
        cin >> a >> b >> c;
        ulli arrA[a]{0};
        ulli arrB[b]{0};
        ulli arrC[c]{0};
        inArr(arrA,a);
        inArr(arrB,b);
        inArr(arrC, c);



        for (ulli i = 0; i < a; i++)
        {
            for (ulli j = 0; j < b; j++)
            {
                if (arrB[j] != arrA[i])
                {
                    arrB[i] = -1;
                    arrA[i] = -1;
                }
                else{
                    for (ulli k = 0; k < c; k++)
                    {
                        if(arrB[j]==-1) continue;
                        if (arrC[k] != arrB[i])
                        {
                            arrC[k] = -1;
                            arrB[i] = -1;
                        }
                        else{
                            res.push_back(arrA[i]);
                            break;
                        }
                    }
                    
                }
            }
        }
        for (ulli i = 0; i < res.size(); i++)
        {
            cout<<res[i]<<' ';
        }
        cout<<'\n';
        
    }
}