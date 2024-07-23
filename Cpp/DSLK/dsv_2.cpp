#include <bits/stdc++.h>
using namespace std;
#define fr(i,a,b) for (auto i = a ; i < b ;i++)
#define FR(i,a,b) for (auto i = a ; i < b ;i--)
#define fx(a) for (auto x:a)
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
long long t,n;
// F5 to run code
void ie() {
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    if (fopen("test.inp", "r")) {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
}
struct date {
    int day;
    int month;
    int year;
};
struct student{
    int id;
    string name;
    date birthday;
    double mark;
};
bool kt(string ten){
    int i=ten.length();
    for(;ten[i]!=' ';i--);
    string name=ten.substr(i);
    if(name.find("Tuan")!=string::npos) return true;
    else return false;
}
void source() {
    int n;
    cin>>n;
    student sv[n];
    for (int i = 0; i < n; i++) {
        cin>>sv[i].id;
        cin.ignore();
        getline(cin,sv[i].name);
        cin>>sv[i].birthday.day>>sv[i].birthday.month>>sv[i].birthday.year;
        cin>>sv[i].mark;
    }
    for(int i = 0; i < n; i++) {
        if(sv[i].mark>=5){
            cout<<sv[i].id<<", "<<sv[i].name<<", "<<sv[i].birthday.day<<"/"<<sv[i].birthday.month<<"/"<<sv[i].birthday.year<<", "<<sv[i].mark<<endl;
        }
    }
    cout<<"**********"<<endl;
    for(int i = 0; i < n; i++) {
        if(sv[i].birthday.year==2003){
            cout<<sv[i].id<<", "<<sv[i].name<<", "<<sv[i].birthday.day<<"/"<<sv[i].birthday.month<<"/"<<sv[i].birthday.year<<", "<<sv[i].mark<<endl;
        }
    }
    cout<<"**********"<<endl;
    for(int i = 0; i < n; i++) {
        if(kt(sv[i].name)){
            cout<<sv[i].id<<", "<<sv[i].name<<", "<<sv[i].birthday.day<<"/"<<sv[i].birthday.month<<"/"<<sv[i].birthday.year<<", "<<sv[i].mark<<endl;
        }
    }
}
int main(){
    ie();
    source();
}
