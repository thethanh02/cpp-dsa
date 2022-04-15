#include <bits/stdc++.h>
using namespace std;
void Solution(map<int, int> mp) {
    map<int, int>::iterator i;
    for (i = mp.begin(); i!= mp.end(); i++) 
        int f = i->first, s = i->second;
}
int main() {
    int time;
    cin >> time;
    while (time--) {
        int n, check = 0;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        Solution(mp);
        for (int i = 0; i < n; i++) {
            if (mp[a[i]] >= 2) {
                check = 1;
                cout << a[i] << endl;
                break;
            }
        }
        if (!check) cout << "NO\n";
    }
}