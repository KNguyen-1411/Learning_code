#include <iostream>
#include <string>
using namespace std;

int dem(const string& s) {
    const int max = 26; 
    int dem = 0;
    int count[max] = {0}; 
    for (char ch : s) {
        if (isalpha(ch)) {
            int i = tolower(ch) - 'a';
            if (count[i] == 0) {
                dem++;
                count[i] = 1;
            }
        }
    }
    return dem;
}

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s ;
    getline(cin,s);
    int count = dem(s);
    cout<< count;
    
    return 0;
}