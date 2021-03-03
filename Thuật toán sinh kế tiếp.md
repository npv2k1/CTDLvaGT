# Thuật toán sinh kế tiếp 

## Bài toán liệt kê:

Sinh xâu nhị phân

Sinh hoán vị

Sinh tổ hợp

### Sinh xâu nhị phân độ dài n:

Thuật toán:

* B1: Khởi tạo mảng ``a[]={0}``. Các phần tử mảng a bằng 0.
* B2: Thực hiện lặp
  * Tìm phần tử lớn nhất sao cho `a[i]==0` .
  * Thay thế `a[i]=1`
  * thay thế `a[i] ->  a[n-1]` bằng 0
  * 

```cpp
void XnpKt(int x[], int n)
{
    int c = 0;
    int i;
    // Khởi tạo
    for (i = 1; i <= n; i++)
        x[i] = 0;
    // lặp
    while (1)
    {      

        for (int j = 1; j <= n; j++)
            cout << x[j];
        cout << endl;

        i = n;
        while (i > 0 && x[i] == 1)
        {
            x[i] = 0;
            i--;
        }
        if (i == 0)
            return;
        else
        {
            x[i] = 1;
        }
    }
}
```

### Sinh hoán vị

Thuật toán:

```cpp
void SinhHV(int x[], int n)
{
    int i = 0;
    // Khởi tạo
    for (i = 1; i <= n; i++)
    {
        x[i] = i;
    }
    // lặp
    while (1)
    {
        // xuất
        for (i = 1; i <= n; i++)
        {
            cout << x[i];
        }
        cout << ' ';
        // tìm i lớn nhất sao cho x[i] < x[i+1]. Không tìm thấy thì thoát
        i = n - 1;
        while (i > 0 && x[i] > x[i + 1])
        {
            i--;
        }
        if (i == 0)
        {
            cout << endl;
            return;
        }
        // Tìm k sao cho a[k]>a[i] và a[k] nhỏ nhất trong các số > a[i]
        int k = n;
        while (x[k] < x[i])
        {
            k--;
        }
        // Đổi chỗ a[i] và a[k];
        int tmp = x[k];
        x[k] = x[i];
        x[i] = tmp;

        // Lặt ngược đoặn từ a[i+1] đến a[n]
        int j = i + 1;
        int r = n;
        while (j < r)
        {
            int tmp = x[j];
            x[j] = x[r];
            x[r] = tmp;
            j++, r--;
        }
    }
}
```

### Sinh tổ hợp:

Thuật toán:

```cpp
void SinhTH(int x[], int n, int k)
{
    int i = 0;
    // khởi tạo
    for (i = 1; i <= k; i++)
    {
        x[i] = i;
    }
    // lặp
    while (1)
    {
        // In ra màn hình
        for (i = 1; i <= k; i++)
        {
            cout << x[i];
        }
        cout << ' ';
        // tìm phần tử x[i] sao cho x[i] < n-k+i;
        i = k;
        while (i > 0 && x[i] >= n - k + i)
        {
            i--;
        }
        // Kiểm tra tổ hợp cuối
        if (i == 0)

        {
            cout << endl;
            return;
        }
        // tính toán lại các phần tử tiếp theo.
        x[i] = x[i] + 1;
        for (int j = i + 1; j <= k; j++)
        {
            x[j] = x[i] + j - i;
        }
    }
}
```

