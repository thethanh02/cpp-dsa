#include <bits/stdc++.h>
using namespace std;

vector <vector <string>> Data(10);

void back(string s, int cnt2, int cnt3, int cnt5, int cnt7, int odd) {
    if (s.size() == 10) return;
    if (cnt2 && cnt3 && cnt5 && cnt7 && odd) Data[s.size()].push_back(s);
    back(s + '2', cnt2 + 1, cnt3, cnt5, cnt7, 0);
    back(s + '3', cnt2, cnt3 + 1, cnt5, cnt7, 1);
    back(s + '5', cnt2, cnt3, cnt5 + 1, cnt7, 1);
    back(s + '7', cnt2, cnt3, cnt5, cnt7 + 1, 1);
}

int main() {
    int n;
    cin >> n;
    back("", 0, 0, 0, 0, 0);
    for (int i = 4; i <= n; i++) {
        sort(Data[i].begin(), Data[i].end());
        for (auto j : Data[i]) cout << j << endl;
    }
}