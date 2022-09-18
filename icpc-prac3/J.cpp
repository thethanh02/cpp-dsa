#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e4 + 5;
int n, len;
vector<int> s(maxn,0), a(maxn,0);
void add(int x, int delta) {
    for (int i = 2;i * i <= x;i++) {
        while (x % i == 0) {
            s[i] += delta;
            x /= i;
        }
    }
    if (x != 1) s[x] += delta;
}
void mul(int x) {
    len += 5;
    for (int i = 0;i < len;i++) a[i] *= x;
    for (int i = 0;i < len;i++) {
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }
    while (len > 0 && !a[len - 1]) len--;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        s=vector<int> (maxn,0);
        a=s;
        cin >> n;
        if(n%2!=0) cout<<0<<endl;
        else{
            n=n/2;
            for (int i = 1;i <= n;i++) add(2 * n - i + 1, 1);
            for (int i = 1;i <= n + 1;i++) add(i, -1);
            a[0] = len = 1;
            for (int i = 1;i < maxn;i++) {
                while (s[i]--) mul(i);
            }
            if(len>10){
                for (int i = len - 1;i >= len - 5;i--) cout << a[i];
                cout<<"...";
                for(int i=4;i>=0;i--) cout<<a[i];
                cout << endl;
            }
            else{
                for(int i=len - 1;i>=0;i--) cout<<a[i];
                cout<<endl;
            }
        }
        
        
        
    }
}