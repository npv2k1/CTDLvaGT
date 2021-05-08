// Note that by default C++ creates a max-heap
// for priority queue
#include <iostream>
#include <queue>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> gquiz;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin>>tmp;
            gquiz.push(tmp);
        }
        long long tong = 0;
        while (gquiz.size() > 1)
        {
            int a = gquiz.top();
            gquiz.pop();
            int b = gquiz.top();
            gquiz.pop();
            tong = tong + a + b;
            gquiz.push(a + b);
        }
        cout << tong<<'\n';
    }
    return 0;
}
