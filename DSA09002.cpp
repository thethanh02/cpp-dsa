#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; cin.ignore();
    for (int i = 0; i < t; i++) {
        int token;
        string s;
        getline(cin , s);
        stringstream tmp(s);
        while (tmp >> token) 
            if (token > i + 1) cout << i + 1 << " " << token << endl;
    }
}