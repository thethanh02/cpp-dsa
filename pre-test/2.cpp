#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int n = 1e6 - 1;
    while (n--) s.push_back('4');
    long long cnt = 0;
    for (int i = 0; i < s.size(); i++) 
        if (s[i] == '0' || s[i] == '4' || s[i] == '8') cnt++;
    for (int i = 0; i < s.size() - 1; i++) {
        string tmp = s.substr(i, 2);
        int num = stoi(tmp);
        if (num % 4 == 0) cnt += (i + 1);
    }
    cout << cnt;
}