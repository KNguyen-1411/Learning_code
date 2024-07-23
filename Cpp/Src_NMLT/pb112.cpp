#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Task() {
    // #ifndef  ONLINE_JUDGE
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    if (fopen("test.inp", "r")) {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
    // #endif
}
void Solve() {
    string s;
    getline(cin,s);
    size_t n=s.length();
    int m1=-1,m2=-1;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='A'){
            m1=i;
            break; 
        }
    }
    for (int i = n; i > 0; i--)
    {
        if(s[i]=='Z'){
            m2=i;
            break;
        } 
    }    
    cout<<m2-m1+1;
    
    
    
}

int main() {
    Task();
    Solve();
}