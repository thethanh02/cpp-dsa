#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        pair<int, int> p[n];
        int max_x, min_x, max_y, min_y, max_neg_x, min_neg_x, max_neg_y, min_neg_y, ok = 0;
        max_x = max_y = max_neg_x = max_neg_y = INT_MIN;
        min_x = min_y = min_neg_y = min_neg_x = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> p[i].first >> p[i].second;
            if (p[i].first == 0) {
                if (p[i].second > max_y && p[i].second > 0) 
                    max_y = p[i].second;
                if (p[i].second > max_neg_y && p[i].second < 0)
                    max_neg_y = p[i].second;
            } else if (p[i].second == 0) {
                if (p[i].first > max_x && p[i].first > 0) 
                    max_x = p[i].first;
                if (p[i].first > max_neg_x && p[i].first < 0)
                    max_neg_x = p[i].first;
            }
        }
        if (min_y != 0 && min_neg_y != 0) {
            if ((min_x != 0 && min_neg_x == 0) || (min_x == 0 && min_neg_x != 0)) ok = 1;
            else if (min_x == 0 && min_neg_x == 0) ok = 2;
        } else if (min_x != 0 && min_neg_x != 0) {
            if ((min_y != 0 && min_neg_y == 0) || (min_y == 0 && min_neg_y != 0)) ok = 1;
            else if (min_y == 0 && min_neg_y == 0) ok = 2;
        }
    }
}
