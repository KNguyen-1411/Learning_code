#include <bits/stdc++.h>
using namespace std;
#define filename "test"
#define fr(i, a, b) for (auto i = a; i < b; i++)
#define fx(a) for (auto x : a)
#define pb push_back
#define ll long long
long long t, n;
// #define m 1000000007
// #define e 0.000000001
void Solve();
void Task(){
    #ifndef ONLINE_JUDGE
    clock_t begin = clock();
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen(filename ".inp", "r"))
    {
        freopen(filename ".inp", "r", stdin);
        freopen(filename ".out", "w", stdout);
    }
    #endif
    Solve();
    #ifndef ONLINE_JUDGE
    cerr << "Time: " << (clock() - begin + 1.0) / CLOCKS_PER_SEC << "s";
    #endif
}
class Node {
public:
    int a,b;
    string c,d;
    Node * next;
    Node(int a, int b, string c, string d) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->next = nullptr;
    }
};
typedef Node * node;
class Nodelist{
private:
    node head;
public:
    Nodelist() {
        head = nullptr;
    }
    size_t dem(){
        node q = head;
        size_t dem = 0;
        while (q!= nullptr)
        {
            dem++;
            q = q->next;
        }
        return dem;
    }
    void insF(int a, int b, string c, string d){
        node p = new Node(a,b,c,d);
        p->next = head;
        head = p;
    }
    void insL(int a, int b, string c, string d){
        node p = new Node(a,b,c,d);
        if (head == nullptr) {
            head = p;
            return;
        }
        node q = head;
        while (q->next!= nullptr) {
            q = q->next;
        }
        q->next = p;
    }
    void insP(int a, int b, string c, string d,int p){
        node newnode = new Node(a,b,c,d);
        size_t k=dem();
        if (p < 1)
        {
            return;
        }
        else if (p == 1)
        {
            newnode->next = head;
            head = newnode;
        }
        else if (p > k+1)
        {
            insL(a,b,c,d);
        }
        else
        {
            node x = head;
            for (int i = 1; i <= p - 2; i++)
            {
                x = x->next;
            }
            newnode->next = x->next;
            x->next = newnode;
        }
    }
    void delF(){
        if (head == nullptr) {
            return;
        }
        node p = head;
        head = head->next;
        delete p;
    }
    void delL(){
        if (head == nullptr) {
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        node q = head;
        while (q->next->next!= nullptr) {
            q = q->next;
        }
        delete q->next;
        q->next = nullptr;
    }
    void delP(int p){
        if (head == nullptr) {
            return;
        }
        if (p == 1) {
            delF();
            return;
        }
        node q = head;
        for (int i = 1; i <= p - 2; i++)
        {
            q = q->next;
        }
        node x = q->next;
        q->next = x->next;
        delete x;
    }
    void deK(int k){
        while (head && head->a == k){
            node temp = head;
            head = head->next;
            delete temp;
        }

        node p = head;
        while (p && p->next){
            if (p->next->a == k){
                node temp = p->next;
                p->next = temp->next;
                delete temp;
            }
            else{
                p = p->next;
            }
        }
    }
    void Daonguoc(){
        node prev = nullptr;
        node curr = head;
        node next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    void duyet(){
        node q = head;
        while (q!= nullptr)
        {
            cout << q->a << " " << q->b << " " << q->c << " " << q->d << endl;
            q = q->next;
        }
    }
    void Sort()
    {
        for (node tmp1 = head; tmp1 != nullptr; tmp1 = tmp1->next)
        {
            for (node tmp2 = tmp1->next; tmp2 != nullptr; tmp2 = tmp2->next)
            {
                if (tmp2->a < tmp1->a or
                    (tmp2->a == tmp1->a and tmp2->b < tmp1->b))
                {
                    swap(tmp1->a, tmp2->a);
                    swap(tmp1->b, tmp2->b);
                    swap(tmp1->c, tmp2->c);
                    swap(tmp1->d, tmp2->d);
                }
            }
        }
    }
};
void Solve() {
    Nodelist list;
    int a,b,p;
    string c,d,s;
    while (cin>>s)
    {
        if(s=="insL"){
            cin>>a>>b>>c>>d;
            list.insL(a,b,c,d);
        }else if(s=="insF"){
            cin>>a>>b>>c>>d;
            list.insF(a,b,c,d);
        }else if(s=="insP"){
            cin>>p>>a>>b>>c>>d;
            list.insP(a,b,c,d,p);
        }else if(s=="delF"){
            list.delF();
        }else if(s=="delL"){
            list.delL();
        }else if(s=="delP"){
            int p;
            cin>>p;
            list.delP(p);
        }else if(s=="insF"){
            cin>>a>>b>>c>>d;
            list.insF(a,b,c,d);
        }else if(s=="show"){
            list.duyet();
        }else if(s=="sort"){
            list.Sort();
        }else if(s=="reverse"){
            list.Daonguoc();
        }else if(s=="insF"){
            int k;
            list.deK(k);
        }else{
            break;
        }
    }
}
int main(){
    Task();
}
