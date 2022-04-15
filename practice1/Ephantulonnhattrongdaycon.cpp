#include <bits/stdc++.h>
using namespace std;

void Solution(int n, int k, vector<int> v) {
    deque<int> dq;
    while (dq.size()) dq.pop_front();
    for (int i = 0; i < n; i++) {
        // Tao day con giam dan, nen loai bo ptu <= v[i]
        while(dq.size() && v[dq.back()] <= v[i]) dq.pop_back();
        dq.push_back(i);

        // Phan tu dau tien nam ngoai khoang tinh thi loai bo
        if(dq.front() + k <= i) dq.pop_front();
        // Day con nhan duoc giam dan nen phan tu dau tien la lon nhat
        if(i + 1 >= k) cout << v[dq.front()] << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        Solution(n, k, v);
    }
}
