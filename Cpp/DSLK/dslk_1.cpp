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
struct Node {
    string name;    //là xâu ký tự không có ký tự trắng tên người
    int mark;       //là điểm số có giá trị từ 0..9
    struct Node* next;
};
typedef Node List;
void InsertFirst(List*& head, string vname, int vmark) {
    List* newNode = new List;
    newNode->name = vname;
    newNode->mark = vmark;
    newNode->next = head;
    head = newNode;
}
void InsertLast(List*& head, string vname, int vmark) {
    List* newNode = new List;
    newNode->name = vname;
    newNode->mark = vmark;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode;
        return;
    }
    
    List* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    temp->next = newNode;
}
int Count(List* head, int vmark) {
    int count = 0;
    List* temp = head;
    while (temp != nullptr) {
        if (temp->mark >= vmark) {
            count++;
        }
        temp = temp->next;
    }
    return count;
}
void source(){
    List* head = nullptr;
    int n;
    string x,y;
    while (1)
    {
        cin>>x;
        if(x=="count"){
            cin>>n;
            cout<<Count(head,n)<<endl;
        }else{
            cin>>y;
            cin>>n;
            if (x == "fin") break;
            if (x == "insF") {
                InsertFirst(head,y,n);
            }
            else if (x == "insL") {
                InsertLast(head,y,n);
            }
        }
    }
    
}
int main(){
    ie();
    source();
}
