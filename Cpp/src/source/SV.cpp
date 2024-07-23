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
ll f[10000];
// F5 to run code
void ie() {
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("dulieu.cvs", "r", stdin);
    freopen("test.out", "w", stdout);
}
struct ngaysinh
{
    int dd,mm,yy;
};
struct sinhvien
{
    int maso;
    string hoten;
    ngaysinh ns;
    float diem;
};
void source(){
    cin>>n;
    vector<sinhvien> sv;
    fr(i,0,n){
        sinhvien temp;
        cin>>temp.maso;
        cin.ignore();
        gl(temp.hoten);
        cin>>temp.ns.dd>>temp.ns.mm>>temp.ns.yy;
        cin>>temp.diem;
        cin.ignore();
        sv.pb(temp);
    }
    const int Width = 25, WidthTuoi = 20, WidthDiem = 10, WidthSTT = 5;
    cout << left << setw(WidthSTT) << "| MS";
    cout << left << setw(Width) << "| Ho Ten";
    cout << left << setw(WidthTuoi) << "| NgaySinh";
    cout << left << setw(WidthDiem) << "| Diem    |" << endl;
    cout << setfill('-') << setw(WidthSTT + Width + WidthTuoi + WidthDiem + 2) << "" << setfill(' ') << endl;
    for(sinhvien temp:sv){
        // if(temp.diem>5&&temp.ns.yy==2000){
            string x=to_string(temp.ns.dd)+"/"+to_string(temp.ns.mm)+"/"+to_string(temp.ns.yy);
            cout << "| " << left << setw(WidthSTT - 2) << temp.maso;
            cout << "| " << left << setw(Width - 2) << temp.hoten;
            cout << "| " << left << setw(WidthTuoi - 2) << x;
            cout << "| " << left << setw(WidthDiem - 2) << temp.diem << "|" << endl
                    << endl;
        // }
    }
}
int main(){
    ie();
    source();
}
