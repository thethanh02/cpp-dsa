#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
// alo test wsl git
class PERSON {
    char name[30];
    char dob[30];

   public:
    void Init() {
        cin.ignore();
        cout << "Ho ten: ";
        cin.getline(name, 30);
        cin.ignore();
        cout << "Ngay sinh: ";
        cin.getline(dob, 30);
        cin.ignore();
    }

    void Print() {
        cout << "Ho ten: " << name << endl;
        cout << "Ngay sinh: " << dob << endl;
    }
};

class STUDENT : public PERSON {
    char lop[30];
    double mark;

   public:
    void Init() {
        PERSON::Init();
        cout << "Lop: ";
        cin.getline(lop, 30);
        cin.ignore();
        cout << "Diem thi: ";
        cin >> mark;
    }
    void Print() {
        PERSON::Print();
        cout << "Lop: " << lop << endl;
        cout << "Diem thi: " << mark << endl;
    }
};

int main() {
    int i, n;
    STUDENT a[100];
    cout << "n = ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Hoc sinh thu " << (i + 1) << ": \n";
        a[i].Init();
    }
    cout << "Thong tin vua nhap:\n";
    for (i = 0; i < n; i++)
        a[i].Print();

    return 0;
}