#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int len = 0;
        stack<int> a;
        // Khởi tạo giá trị đầu tiên của stack
        a.push(-1);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                // nếu mà ( thì ta đẩy vị trí hiện tại cảu nó vào stack.
                a.push(i);
            }
            else
            {
                // Nếu gặp goặc đóng và trước đó có 1 ngoặc mở thì ta pop nó ra luôn.
                a.pop();
                if (a.size() > 0)
                {
                    len = max(len, i - a.top());
                }
                // Nếu mà gặp (( liên tiếp thì ta cần đặt lại vị trí bắt đầu đếm.
                if (a.size() == 0)
                    a.push(i);
            }
        }
        cout << len << '\n';
    }
    return 0;
}
/**
 * Thuật toán như sau.
 * nguồn học : https://www.youtube.com/watch?v=Zil3wE1RUEs* 
 * 
 */