#include <bits/stdc++.h>
using namespace std;
void Task() {
    // #ifndef ONLINE_JUDGE
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    if (fopen("test.inp", "r")) {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
    // #endif
}
string kq(string& s,int n,int k){
    size_t x = s.length();
    for (int i = 0; i < x; i++)
    {
        s[i]=toupper(s[i]);
    }
    
    for (int i = 0; i < x; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            if(s[i] + k >= 'A' && s[i] + k <= 'Z'){
                s[i]=s[i]+k;
            }else{
                s[i]=s[i]+k-26;                
            }
        }
    }
    return s;
}
void Solve() {
    int n,k;
    cin>>n>>k;
    cin.ignore(1);
    string s;
    for (int i = 0; i < n; i++)
    {
        getline(cin,s);
        cout<<kq(s,n,k)<<endl;    
    }
}

int main() {
    Task();
    Solve();
}