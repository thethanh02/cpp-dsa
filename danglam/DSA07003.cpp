#include<bits/stdc++.h>
using namespace std;

string Result(string s) {
    return "Yes";
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout << Result(s) << endl;
    }
}