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
typedef struct Node{
    int mahang ;
    int trongluong ; // tinh theo kg
    int dongia ;
    string tentraicay ; // Bo, Mit, Sau-Rieng
    struct Node *next ;
}DSTC;
void add(Node *&head,int mahang,int trongluong,int dongia,string tentraicay){
    Node *temp = new Node;
    temp->mahang = mahang;
    temp->trongluong = trongluong;
    temp->dongia = dongia;
    temp->tentraicay = tentraicay;
    temp->next = head;
    head = temp;
}
ll sum(Node *&head,string tentraicay){
    ll sum=0;
    Node *temp = head;
    while(temp!=NULL){
        if(temp->tentraicay == tentraicay){
            sum += (temp->trongluong*temp->dongia);
        }
        temp = temp->next;
    }
    return sum;
}
void source(){
    Node *head = nullptr;
    string a;
    while (1)
    {
        cin>>a;
        if(a=="Add"){
            int x,y,z;
            string name;
            cin>>x>>y>>z;
            cin.ignore();
            cin>>name;
            add(head,x,y,z,name);
        }else if (a=="Sum"){
            string name;
            cin>>name;
            cout<<sum(head,name)<<endl;
        }else if(a=="Fin"){
            break;
        }
    }
    
}
int main(){
    ie();
    source();
}
