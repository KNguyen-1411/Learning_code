#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int T;
void Task() {
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    if (fopen("test.inp", "r")) {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
}

void Solve() {
    string s;
    getline(cin,s);
    const int maxx = 26; 
    int count[maxx] = {0}; // Mang dem
    for (char ch : s) {
        if (isalpha(ch)) {
            int i = tolower(ch) - 'a'; //quy ve 1
            count[i]++;
            if (count[i] > 1) {
                cout<<"no";
                return;
            }
        }
    }
    cout<<"yes";
}

int main() {
    Task();
    Solve();
}