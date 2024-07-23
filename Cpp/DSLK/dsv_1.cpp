#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define fr(i,a,b) for (auto i = a ; i < b ;i++)
#define FR(i,a,b) for (auto i = a ; i < b ;i--)
#define w(n) while(n--)
#define gl(s) getline(cin,s)
#define c(n) cin>>n;
#define cY cout<<"Yes"<<endl
#define cN cout<<"No"<<endl
#define pb push_back
#define fi first
#define se second
#define ll long long
#define m 1000000007
#define e 0.000000001
#define fs(i) find(s[i])
string s;
ll t,n;
// F5 to run code
void ie() {
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    if (fopen("test.inp", "r")) {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
}
struct sv {
    string ho;
    string ten;
    float diem;
};
void PrintFFFFF(vector<sv> students) {
    cout << "<?xml version=1 encoding=UTF-8?>" << endl;
    for ( sv student : students) {
        if (student.diem >= 5.0) {
            cout << "<Student>" << endl;
            cout << "\t<LastName>" << student.ho << "</LastName>" << endl;
            cout << "\t<FirstName>" << student.ten << "</FirstName>" << endl;
            cout << "\t<Mark>" <<fixed<<setprecision(2)<< student.diem << "</Mark>" << endl;
            cout << "</Student>" << endl;
        }
    }
}
void source() {
    vector<sv> luu;
    string line;
    while (getline(cin, line)) {
        istringstream iss(line);
        string ho, ten, diemStr;
        getline(iss, ho, '|');
        getline(iss, ten, '|');
        getline(iss, diemStr, '|');
        float diem = stof(diemStr);
        luu.push_back({ho, ten, diem});
    }
    PrintFFFFF(luu);
}
int main(){
    ie();
    source();
    
}