#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <fstream>
using namespace std;

void task()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
struct thuoctinh // thiet lap thuoc tinh cho sv
{
    string ten;
    int tuoi;
    float diem;
};
vector<string> textip;
vector<thuoctinh> sinhvien;
inline namespace input
{
    void xuly(vector<string> textip, vector<thuoctinh> &sinhvien)
    {
        for (string text : textip)
        {
            bool c1 = 0, c2 = 0;
            string sten = "", stuoi = "", sdiem = "";
            for (char ch : text)
            {
                if (c1 == 1 && ch == ';')
                    c2 = 1;
                if (ch == ';')
                    c1 = 1;
                if (ch != ';')
                {
                    if (c1 == 0 && c2 == 0)
                        sten += ch;
                    if (c1 == 1 && c2 == 0)
                        stuoi += ch;
                    if (c1 == 1 && c2 == 1)
                        sdiem += ch;
                }
            }
            int tuoi = atoi(stuoi.c_str());
            float diem = atof(sdiem.c_str());
            thuoctinh nhap;
            nhap.ten = sten;
            nhap.tuoi = tuoi;
            nhap.diem = diem;
            sinhvien.push_back(nhap);
        }
        return;
    }
    void input_text(vector<string> &textip)
    {
        ifstream inputFile("inputqlsv.txt"); // file nhap
        if (inputFile.is_open())
        {
            string dong;
            while (getline(inputFile, dong))
            {
                textip.push_back(dong); // nhap
            }
            inputFile.close();
        }
        else
        {
            cout << "Khong the mo file." << endl;
            exit(0);
        }
    }
    void main_input()
    {
        input_text(textip);
        xuly(textip, sinhvien);
    }
} // namespace input

inline namespace operation
{
    vector<string> textnew;
    void nhap(vector<string> &textnew)
    {
        cout << "Nhap so luong sinh vien: " << endl;
        cout << "Cu phap :  ten;tuoi;diem" << endl;
        int n;
        cin >> n;
        cin.ignore();
        string sv;
        while (n--)
        {
            getline(cin, sv);
            textnew.push_back(sv);
        }
        return;
    }
    void xoamh()
    {
        cout << "\033c";
    }
    void addsv()
    {
        nhap(textnew);
        xuly(textnew, sinhvien);
        cout << "Da them sinh vien" << endl;
    }
    void printTable(const vector<thuoctinh> &sinhvien)
    {
        const int Width = 25, WidthTuoi = 10, WidthDiem = 10, WidthSTT = 5;
        cout << endl;
        cout << left << setw(WidthSTT) << "| STT";
        cout << left << setw(Width) << "| Ho Ten";
        cout << left << setw(WidthTuoi) << "| Tuoi";
        cout << left << setw(WidthDiem) << "| Diem    |" << endl;
        cout << setfill('-') << setw(WidthSTT + Width + WidthTuoi + WidthDiem + 2) << "" << setfill(' ') << endl;
        for (int i = 0; i < sinhvien.size(); ++i)
        {
            cout << "| " << left << setw(WidthSTT - 2) << i + 1;
            cout << "| " << left << setw(Width - 2) << sinhvien[i].ten;
            cout << "| " << left << setw(WidthTuoi - 2) << sinhvien[i].tuoi;
            cout << "| " << left << setw(WidthDiem - 2) << sinhvien[i].diem << "|" << endl
                 << endl;
        }
    }
    void printsaoluu(const vector<thuoctinh> &sinhvien)
    {
        cout << "Danh sach sinh vien:" << endl;
        for (const thuoctinh &sv : sinhvien)
        {
            cout << "Ten: " << sv.ten << ", Tuoi: " << sv.tuoi << ", Diem: " << sv.diem << endl;
        }
    }
    bool tuoisort(const thuoctinh &nguoi1, const thuoctinh &nguoi2)
    {
        return nguoi1.tuoi < nguoi2.tuoi;
    }
    bool diemsort(const thuoctinh &nguoi1, const thuoctinh &nguoi2)
    {
        return nguoi1.diem < nguoi2.diem;
    }
    void sortten(vector<thuoctinh> &sinhvien)
    {
        cout << "Lu qua chua biet lam :)))" << endl;
        for (thuoctinh &sv : sinhvien)
        {
        }
    }
    void sapxep(vector<thuoctinh> &sinhvien)
    {
        cout << "Sap xep theo :" << endl;
        cout << "1 - Ten" << endl;
        cout << "2 - Tuoi" << endl;
        cout << "3 - Diem" << endl;
        cout << "Nhap lenh: " << endl;
        int n;
        cin >> n;
        if (n == 1)
        {
            sortten(sinhvien);
            printTable(sinhvien);
        }
        else if (n == 2)
        {
            sort(sinhvien.begin(), sinhvien.end(), tuoisort);
            printTable(sinhvien);
        }
        else if (n == 3)
        {
            sort(sinhvien.begin(), sinhvien.end(), diemsort);
            printTable(sinhvien);
        }
        else
        {
            cout << "Lenh khong hop le!";
        }
    }
    void xoa(vector<thuoctinh> &sinhvien)
    {
        cout << "Xoa sinh vien theo: " << endl
             << "1 - Ten" << endl
             << "2 - Tuoi" << endl
             << "3 - Diem" << endl
             << "Nhap lenh: ";
        int n;
        cin >> n;

        if (n == 1)
        {
            string ten;
            cout << "Nhap ten sinh vien can xoa: " << endl;
            cin.ignore();
            getline(cin, ten);

            sinhvien.erase(remove_if(sinhvien.begin(), sinhvien.end(), [&ten](const thuoctinh &person)
                                     { return person.ten == ten; }),
                           sinhvien.end());
        }
        else if (n == 2)
        {
            int tuoi;
            cout << "Nhap tuoi sinh vien can xoa: ";
            cin >> tuoi;

            sinhvien.erase(remove_if(sinhvien.begin(), sinhvien.end(), [&tuoi](const thuoctinh &person)
                                     { return person.tuoi == tuoi; }),
                           sinhvien.end());
        }
        else if (n == 3)
        {
            double diem;
            cout << "Nhap diem sinh vien can xoa: ";
            cin >> diem;

            sinhvien.erase(remove_if(sinhvien.begin(), sinhvien.end(), [&diem](const thuoctinh &person)
                                     { return person.diem == diem; }),
                           sinhvien.end());
        }
        else
        {
            cout << "Loi" << endl;
            xoa(sinhvien);
        }
    }
    void saoluu()
    {
        ofstream outputFile;
        outputFile.open("output.txt", ios::out | ios::trunc); // Đặt tên file của bạn tại đây
        if (outputFile.is_open())
        {
            outputFile << "Danh sach sinh vien:" << endl;
            for (const thuoctinh &sv : sinhvien)
            {
                outputFile << "Ten: " << sv.ten << ", Tuoi: " << sv.tuoi << ", Diem: " << sv.diem << endl;
            }
            printsaoluu(sinhvien);
            outputFile.close();
            cout << "Xuat file thanh cong" << endl;
        }
        else
        {
            cout << "Loi" << endl;
        }
    }
    void timkiem(const vector<thuoctinh> &sinhvien)
    {
        cout << "Tim kiem sinh vien theo: " << endl
             << "1 - Ten" << endl
             << "2 - Tuoi" << endl
             << "3 - Diem" << endl
             << "Nhap lenh: ";
        int n;
        cin >> n;

        if (n == 1)
        {
            string ten;
            cin.ignore();
            cout << "Nhap ten sinh vien can tim: ";
            getline(cin, ten);

            bool co = false;
            for (const thuoctinh &sv : sinhvien)
            {
                if (sv.ten == ten)
                {
                    cout << "Thong tin sinh vien:" << endl;
                    cout << "Ten: " << sv.ten << endl;
                    cout << "Tuoi: " << sv.tuoi << endl;
                    cout << "Diem: " << sv.diem << endl;
                    co = true;
                }
            }

            if (!co)
            {
                cout << "Khong tim thay sinh vien trong danh sach." << endl;
            }
        }
        else if (n == 2)
        {
            int tuoi;
            cout << "Nhap tuoi sinh vien can tim: ";
            cin >> tuoi;

            bool co = false;
            for (const thuoctinh &sv : sinhvien)
            {
                if (sv.tuoi == tuoi)
                {
                    cout << "Thong tin sinh vien:" << endl;
                    cout << "Ten: " << sv.ten << endl;
                    cout << "Tuoi: " << sv.tuoi << endl;
                    cout << "Diem: " << sv.diem << endl;
                    co = true;
                }
            }
            if (!co)
            {
                cout << "Khong tim thay sinh vien co tuoi trong danh sach." << endl;
            }
        }
        else if (n == 3)
        {
            double diem;
            cout << "Nhap diem sinh vien can tim: ";
            cin >> diem;

            bool co = false;
            for (const thuoctinh &sv : sinhvien)
            {
                if (sv.diem == diem)
                {
                    cout << "Thong tin sinh vien:" << endl;
                    cout << "Ten: " << sv.ten << endl;
                    cout << "Tuoi: " << sv.tuoi << endl;
                    cout << "Diem: " << sv.diem << endl;
                    co = true;
                }
            }

            if (!co)
            {
                cout << "Khong tim thay sinh vien co diem trong danh sach." << endl;
            }
        }
        else
        {
            cout << "Lenh khong hop le." << endl;
        }
    }
    void suaSinhVien(vector<thuoctinh> &sinhvien)
    {
        cout << "Nhap ten sinh vien can sua: " << endl;
        string ten;
        cin.ignore();
        getline(cin, ten);
        for (thuoctinh &sv : sinhvien)
        {
            if (sv.ten == ten)
            {
                cout << "Nhap thong tin moi cho sinh vien" << endl;
                cout << "Ten: " << endl;
                getline(cin, sv.ten);
                cout << "Tuoi: " << endl;
                cin >> sv.tuoi;
                cout << "Diem: " << endl;
                cin >> sv.diem;

                cout << "Sinh vien da duoc sua." << endl;
                return;
            }
        }

        cout << "Sua thanh cong" << endl;
    }
    void thoat()
    {
        cout << "\033c";
        cout << "Xin chao tam biet va hen gap lai nhe " << endl;
        exit(0);
    }
    void thaotac()
    {
        cout << "Danh sach thao tac:" << endl
             << "1 - In danh sach sv" << endl
             << "2 - Them" << endl
             << "3 - Sua" << endl
             << "4 - Xoa" << endl
             << "5 - Tim kiem" << endl
             << "6 - Sap xep" << endl
             << "7 - Sao luu" << endl
             << "8 - Thoat" << endl
             << "9 - Xoa man hinh" << endl
             << "Nhap lenh: " << endl;
        int n;
        cin >> n;
        if (n == 1)
            printTable(sinhvien);
        else if (n == 2)
            addsv();
        else if (n == 3)
            suaSinhVien(sinhvien);
        else if (n == 4)
            xoa(sinhvien);
        else if (n == 6)
            sapxep(sinhvien);
        else if (n == 5)
            timkiem(sinhvien);
        else if (n == 7)
            saoluu();
        else if (n == 8)
            thoat();
        else if (n == 9)
            xoamh();
        else
            cout << "Lenh khong hop le! " << endl;
        thaotac();
    }
} // namespace operation

int main()
{
    task();
    main_input();
    thaotac();
}