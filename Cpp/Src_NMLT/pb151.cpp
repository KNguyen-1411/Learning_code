#include <bits/stdc++.h>
using namespace std;
#define name "test"
#define fr(i,a,b) for (auto i = a ; i < b ;i++)
#define FR(i,a,b) for (auto i = a ; i < b ;i--)
#define fx(a) for (auto x:a)
#define w(n) while(n--)
#define gl(s) getline(cin,s)
#define c(n) cin>>n;
#define pb push_back
#define fi first
#define se second
#define ll long long
#define m 1000000007
#define e 0.000000001
long long t,n;
// F5 to run code
void Solve();
void Task() {
    clock_t begin = clock();
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    if (fopen(name ".inp", "r"))
    {
        freopen(name ".inp", "r", stdin);
        freopen(name ".out", "w", stdout);
    }
    Solve();
    cerr << "Time: " << (clock() - begin + 1.0) / CLOCKS_PER_SEC << "s";
}

struct node{
    int data; 
    node *next;
};
void IF(node*& head, int n){
    node *newnode= new node;
    newnode->data=n;
    newnode->next=head;
    head=newnode;
}
void IL(node*& head, int n){
    node *newnode= new node;
    newnode->data=n;
    newnode->next=nullptr;
    if(head==nullptr){
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newnode;
}

void Solve() {
    node *head=nullptr; 
    int n,t;
    cin>>n;
    fr(i,0,n){
        cin>>t;
        if(t%2==0) IL(head,t);
        else IF(head,t);
    }
    node* temp = head;
    int i=1,z=1+((n-1)/2);
    cout << temp->data <<endl;
    while (temp != nullptr) {
        if(i==z){
        cout << temp->data << endl;
        }
        i++;
        if (temp->next == nullptr)
            cout << temp->data << endl;
        temp = temp->next;
    }
}
int main() {
    Task();
}
