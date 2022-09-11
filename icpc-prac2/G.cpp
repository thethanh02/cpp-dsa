#include <bits/stdc++.h>
using namespace std;

main() {
    long long n, k, element = INT_MAX;
    cin >> n >> k;
    int check = 0;
    long long a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    long long start = 0, end = 0;
    long long sum = 0, res = 0;
    for (end = 0; end < n; end++) {
        sum += a[end];
        while ((end - start + 1) * a[end] - sum > k && start <= end) {
            sum -= a[start];
            start++;
        }
        if (end - start + 1 > res) {
            // cout<<start<<" "<<end<<endl;
            res = end - start + 1;
            element = a[end];
        }
    }
    cout << element << " " << res << endl;
}