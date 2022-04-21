#include <bits/stdc++.h>
using namespace std;
int check(int n) {
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
            if (sum > n) return 1;
        }
    }
    return 0;
}
int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) 
        if (check(i)) cnt++;
    cout << cnt << endl;
}