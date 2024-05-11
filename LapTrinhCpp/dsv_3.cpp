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
typedef struct {
    int day;
    int month;
    int year;
} date;
typedef struct abc{
    int id;
    string lname; // Họ lót
    string fname; // Tên
    date birthday;
    double mark;
} student;
bool kt(student sv1,student sv2){
    for (int i = 0; i < sv1.fname.length()&& i<sv2.fname.length(); i++)
    {
        if (sv1.fname[i] <sv2.fname[i]) return 1;
        else if (sv1.fname[i] > sv2.fname[i]) return 0;
    }
    for(int i=0; i<sv1.lname.length() &&i<sv2.lname.length() ; i++){
        if (sv1.lname[i] < sv2.lname[i]) return 1;
        else if (sv1.lname[i] > sv2.lname[i]) return 0;
    }
    return 0;
}
void source() {
    cin>>n;
    student sv[n];
    for (int i = 0; i < n; i++) {
        cin>>sv[i].id;
        cin.ignore();
        getline(cin,sv[i].lname);
        getline(cin,sv[i].fname);
        cin>>sv[i].birthday.day>>sv[i].birthday.month>>sv[i].birthday.year>>sv[i].mark;
    }
    int k; cin>>k;
    string s;
    vector<int> luu;
    while(1){
        cin>>s;
        if (s == "End") break;
        if(s!="find") break;
        int z; cin>>z; 
        luu.pb(z);
    }
    sort(sv,sv+n,kt);
    for (int i = 0; i < k; i++) {
        cout<<sv[i].id<<", "<<sv[i].fname<<", "<<sv[i].lname<<", "<<sv[i].birthday.day<<"/"<<sv[i].birthday.month<<"/"<<sv[i].birthday.year<<", "<<sv[i].mark<<endl;
    }
    cout<<"***"<<endl;
    fx(luu){
        bool co=0;
        for(student hs:sv){
            if(hs.id ==x){
                co=1;
                cout<<hs.id<<", "<<hs.fname<<", "<<hs.lname<<", "<<hs.birthday.day<<"/"<<hs.birthday.month<<"/"<<hs.birthday.year<<", "<<hs.mark<<endl;
            }
        }
        if(!co) cout<<"Not Found!"<<endl;
    }
}
int main(){
    ie();
    source();
}
