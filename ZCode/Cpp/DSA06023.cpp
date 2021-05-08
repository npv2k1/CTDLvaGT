#include <bits/stdc++.h>
using namespace std;
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void out(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}

void InterchangeSort(int a[], int n)
{   
    int d=1;
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                Swap(a[i], a[j]);                
            }
        cout << "Buoc " << d << ":" << ' ';
        d++;
        out(a, n);
    }
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    InterchangeSort(a, n);
}