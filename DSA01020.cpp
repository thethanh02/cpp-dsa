#include <bits/stdc++.h>
using namespace std;
string a;
void THtruoc(){
    int i = a.size() - 1;
    while (a[i] != '1' && i > 0) i--;
    if (i == 0 && a[0] == '0') { 
        for (int j = 0; j < a.size(); j++) a[j] = '1';
    } else {
        a[i] = '0';
        for (int j = i + 1; j < a.size(); j++) a[j] = '1';
    }
    cout << a << endl;
}
int main() {
    int t;
    cin >> t; 
    while (t--) {
        cin >> a;
        THtruoc();
    }
}
