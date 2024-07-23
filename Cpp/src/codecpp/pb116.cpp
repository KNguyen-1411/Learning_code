#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while (getline(cin,s))
    {
        string kq="";
        bool fl=true;
        for (int i = 0; i < s.length()-1; i++)
        {
            if(s[i]==' '){
                if(s[i+1]==' ') continue; 
            }else{
                kq+=s;
            }
        }
        
        cout<<kq;
    }
    
}