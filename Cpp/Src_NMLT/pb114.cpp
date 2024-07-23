#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int T;
void Task() {
    // #ifndef ONLINE_JUDGE
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    if (fopen("test.inp", "r")) {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
    // #endif
}
void Solve() {
    int n;
    cin>>n;
    cin.ignore(1);
    string s;
    getline(cin,s);
    n=n%s.length();
    string x=s.substr(n);
    string y=s.substr(0, n);
    cout<<x+y;
}

int main() {
    Task();
    Solve();
}