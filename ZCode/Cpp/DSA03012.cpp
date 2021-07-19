#include <bits/stdc++.h>
using namespace std;

int isPossible(string str)
{

    // Mảng tần số
    unordered_map<char, int> freq;

    // Khai báo max tần số
    int max_freq = 0;
    for (int j = 0; j < (str.length()); j++)
    {
        freq[str[j]]++;

        // Cập nhật tần số max
        if (freq[str[j]] > max_freq)
            max_freq = freq[str[j]];
    }

    // Kiểm tra . Chúng ta chỉ cần max_freq-1 ký tự dể không 2 ký tự nào gần nhau dang ....a...a...a
    if (max_freq <= (str.length() - max_freq + 1))
        return true;

    // Không thoả mãn
    return false;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        isPossible(s) ? cout << 1 : cout << -1;
        cout << '\n';
    }
    return 0;
}
