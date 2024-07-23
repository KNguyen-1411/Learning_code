#include <bits/stdc++.h>
using namespace std;
#define name "test"
#define fr(i, a, b) for (auto i = a; i < b; i++)
#define FR(i, a, b) for (auto i = a; i < b; i--)
#define fx(a) for (auto x : a)
#define w(n) while (n--)
#define gl(s) getline(cin, s)
#define c(n) cin >> n;
#define pb push_back
#define fi first
#define se second
#define ll long long
// #define m 1000000007
// #define e 0.000000001
long long t, n;
// F5 to run code
void Solve();
void Task()
{
    clock_t begin = clock();
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen(name ".inp", "r"))
    {
        freopen(name ".inp", "r", stdin);
        freopen(name ".out", "w", stdout);
    }
    Solve();
    cerr << "Time: " << (clock() - begin + 1.0) / CLOCKS_PER_SEC << "s";
}
string addstring(string a, string b)
{
    string s;
    int sa = a.length() - 1, sb = b.length() - 1, nho = 0;
    while (sa >= 0 || sb >= 0)
    {
        int so_a = (sa >= 0) ? a[sa--] - '0' : 0;
        int so_b = (sb >= 0) ? b[sb--] - '0' : 0;
        int sum = so_a + so_b + nho;
        nho = sum / 10;
        s = to_string(sum % 10) + s;
    }
    if (nho!=0) s="1"+s;
    return s;
}
string add(string a, string b)
{
    int m = a.length(), n = b.length();
    string result = "";
    int nho = 0;

    // Thực hiện phép cộng từ phải sang trái
    for (int i = m - 1, j = n - 1; i >= 0 || j >= 0; i--, j--)
    {
        int x = (i >= 0) ? a[i] - '0' : 0;
        int y = (j >= 0) ? b[j] - '0' : 0;
        int sum = x + y + nho;
        result = to_string(sum % 10) + result;
        nho = sum / 10;
    }

    // Xử lý trường hợp có số nhớ ở cuối
    if (nho > 0)
    {
        result = to_string(nho) + result;
    }

    return result;
}
string multiply(string a, string b)
{
    int m = a.length(), n = b.length();
    vector<int> temp(m + n, 0);

    // Thực hiện phép nhân từng chữ số của a với từng chữ số của b
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            int product = (a[i] - '0') * (b[j] - '0');
            int sum = temp[i + j + 1] + product;
            temp[i + j + 1] = sum % 10;
            temp[i + j] += sum / 10;
        }
    }

    // Xây dựng chuỗi kết quả từ mảng temp
    string result = "";
    int i = 0;
    while (i < temp.size() && temp[i] == 0)
    {
        i++;
    }
    for (; i < temp.size(); i++)
    {
        result += to_string(temp[i]);
    }

    return result.empty() ? "0" : result;
}
string divide(string dividend, string divisor)
{
    string result = "";
    int n = dividend.length();
    int m = divisor.length();

    // Xử lý trường hợp divisor = 0
    if (divisor == "0")
    {
        return "Error: division by zero";
    }

    // Xử lý trường hợp dividend < divisor
    if (n < m || (n == m && dividend < divisor))
    {
        return "0";
    }

    // Thực hiện phép chia
    int index = 0;
    while (index < n)
    {
        string temp = "";
        int i;
        for (i = index; i < n && temp + dividend[i] < divisor; i++)
        {
            temp += dividend[i];
        }
        index = i;
        int q = 0;
        while (temp >= divisor)
        {
            temp = subtract(temp, divisor);
            q++;
        }
        result += to_string(q);
    }

    // Xóa các chữ số 0 ở đầu
    while (result[0] == '0' && result.length() > 1)
    {
        result.erase(0, 1);
    }

    return result;
}
string subtract(string a, string b)
{
    int m = a.length(), n = b.length();
    string result = "";
    int nho = 0;

    // Thực hiện phép trừ từ phải sang trái
    for (int i = m - 1, j = n - 1; i >= 0 || j >= 0; i--, j--)
    {
        int x = (i >= 0) ? a[i] - '0' : 0;
        int y = (j >= 0) ? b[j] - '0' : 0;
        int diff = x - y + nho;
        result = to_string(diff % 10) + result;
        nho = (diff < 0) ? -1 : 0;
    }

    // Xử lý trường hợp kết quả là số âm
    if (nho == -1)
    {
        result = "-" + result;
    }

    // Loại bỏ các chữ số 0 ở đầu
    while (result.length() > 1 && result[0] == '0')
    {
        result.erase(0, 1);
    }

    return (result.empty()) ? "0" : result;
}
void Solve()
{
    cout << multiply("20", "21");
}
int main()
{
    Task();
}
