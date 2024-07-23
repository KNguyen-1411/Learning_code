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
void Task(){
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

void Solve(){
    int n;
    ll kq=0;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];      
    }
    sort(a,a+n,greater<int>());
    for (int i = 0; i < n; ++i)
    {
        int tmp=a[i];
        for(int j=i;j<n;++j){
            tmp=(tmp<a[j])?tmp:a[j];
            kq=(ll)kq+tmp;
        }
    }
    cout<<kq;
}
int main(){
    Task(); 
}
