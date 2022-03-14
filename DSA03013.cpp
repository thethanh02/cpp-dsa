#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<char, int>> freq;
int tim (char x) {
    for (int i = 0; i < freq.size(); i++) 
        if(freq[i].first == x) return i;
    return -1;
}
int cmp(pair<char, int> a, pair<char, int> b) {
    return a.second > b.second;
}
int Result(int n, int d) {
    vector<char> res(n, ' ');
    int k = freq.size();
    for (int i = 0; i < k; i++) {
        int j = 0, p = freq[i].second;
        for (int h = 0; h < p; h++) {
            if (j + h * d > n) return -1;
            while(res[j + h * d] != ' ') j++;
            res[j + h * d] = freq[i].first;
        }
    }
    return 1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        freq.clear();
        int d;
        string s;
        cin >> d >> s;
        for (int i = 0; i < s.size(); i++) {
            int tmp = tim(s[i]);
            if (tmp == -1) freq.push_back({s[i], 1});
            else freq[tmp].second++;
        }
        stable_sort(freq.begin(), freq.end(), cmp);
        cout << Result(s.size(), d) << endl;
    }
}
