#include <bits/stdc++.h>
using namespace std;
int main()
{
    int gio, phut, giay;
    int ss;
    cin >> ss;
    gio = ss / 3600;
    phut = ss % 3600 / 60;
    giay = ss % 3600 % 60;
    if (gio == 0)
    {
        if (phut == 0)
        {
            if (giay > 9)
            {
                cout << "00:00:" << ss;
            }
            else
            {
                cout << "00:00:0" << ss;
            }
        }
        else if (phut > 9)
        {
            if (giay > 9)
            {
                cout << "00:" << phut << ":" << giay;
            }
            else
            {
                cout << "00:" << phut << ":0" << giay;
            }
        }
        else if (phut < 9)
        {
            if (giay > 9)
            {
                cout << "00:0" << phut << ":" << giay;
            }
            else
            {
                cout << "00:0" << phut << ":0" << giay;
            }
        }
    }
    else if (gio > 9)
    {
        if (phut == 0)
        {
            if (giay > 9)
            {
                cout << gio << ":00:" << giay;
            }
            else
            {
                cout << gio << ":00:0" << giay;
            }
        }
        else if (phut > 9)
        {
            if (giay > 9)
            {
                cout << gio << ":" << phut << ":" << giay;
            }
            else
            {
                cout << gio << ":" << phut << ":0" << giay;
            }
        }
        else if (phut < 9)
        {
            if (giay > 9)
            {
                cout << gio << ":0" << phut << ":" << giay;
            }
            else
            {
                cout << gio << ":0" << phut << ":0" << giay;
            }
        }
    }
    else
    {
        if (phut == 0)
        {
            if (giay > 9)
            {
                cout << "0" << gio << ":00:" << ss;
            }
            else
            {
                cout << "0" << gio << ":00:0" << ss;
            }
        }
        else if (phut > 9)
        {
            if (giay > 9)
            {
                cout << "0" << gio << ":" << phut << ":" << giay;
            }
            else
            {
                cout << "0" << gio << ":" << phut << ":0" << giay;
            }
        }
        else if (phut < 9)
        {
            if (giay > 9)
            {
                cout << "0" << gio << ":0" << phut << ":" << giay;
            }
            else
            {
                cout << "0" << gio << ":0" << phut << ":0" << giay;
            }
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  	int s; cin>>s;
// 	int h=s/3600; int hd=s%3600;
// 	int p=hd/60;  s=hd%60;
// 	cout<<setfill('0')<<setw(2)<<h<<":"<<setw(2)<<p<<":"<< setw(2)<<s;
// 	return 0;
// }