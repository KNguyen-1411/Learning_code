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
struct Node{
    int data;
    Node *next;
};

Node *cnode(int data){
    Node *node = new Node();
    node->data = data;
    node->next = nullptr;
    return node;
}
size_t count(Node *head){
    size_t cnt = 0;
    while(head != nullptr){
        cnt++;
     head = head->next;
    }
    return cnt;
}

void isf(Node *&head, int x){
    Node *node = cnode(x);
    node->next = head;
    head = node;
}

void InsertLast(Node *&head, int x){
    Node *node = cnode(x);
    if(head == nullptr){
        head = node;
        return;
    }
    Node *last = head;
    while(last->next != nullptr){
     last = last->next;
    }
    last->next = node;
}

void islb(Node *&head, int x){
    Node *node = cnode(x);
    Node *last = head, *newpos = head;
    newpos = newpos->next;
    while(last->next->next != nullptr){
    last = last->next;
    }
    newpos = last->next;
    last->next = node;
    node->next = newpos;
}

void InsertBeforeP(Node *&head, int x, int pos){
    pos -= 1;
    Node *node = cnode(x);
    if(head == nullptr){
    head = node;
    return;
    }
    if(pos == 0){
    isf(head, x);
    return;
    }
    if(pos >= count(head) - 1){
    InsertLast(head, x);
    return;
    }
    Node *res = head, *newpos = head;
    while(--pos){
    res = res->next;
    }
    newpos = res->next;
    res->next = node;
    node->next = newpos;
}

void Delete(Node *&head, int pos){
    pos -= 1;
    if(head == nullptr) return;
    Node *res = head, *newpos = head;
    if(pos == 0){
    Node *pf = head;
    head = head->next;
    delete pf;
    return;
    }
    if(pos >= count(head)){
    return;
    }
    pos += 1;
    while(--pos){
    if(pos > 1) newpos = newpos->next;
    res = res->next;
    }
    newpos->next = res->next;
    res->next = nullptr;
    delete res;
}

float Average(Node *head){
    float sum = 0, cnt = count(head);
    while(head != nullptr){
    sum += (float)head->data;
    head = head->next;
    }
    return sum / (float)cnt;
    }

    void duyet(Node *head){
    while(head != nullptr){
    cout << head->data << ' ';
    head = head->next;
    }
}
void source() {
    Node *head = nullptr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    int data;
    cin >> data;
    InsertLast(head, data);
    }
    while(1){
    char temp;
    cin >> temp;
    if(temp == '0'){
    cin >> temp;
    if(temp == '0') return ;
    }
    else if(temp == 'i'){
    int x, p;
    cin >> x >> p;
    InsertBeforeP(head, x, p);
    }
    else if(temp == 'd'){
    int p;
    cin >> p;
    Delete(head, p);
    }
    else if(temp == 'a'){
    cout << fixed << setprecision(4) << (float)Average(head) << '\n';
    }
    }
}
int main(){
    ie();
    source();
}
