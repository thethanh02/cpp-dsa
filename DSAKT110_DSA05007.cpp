#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        b[0] = a[0]; b[1] = max(a[0], a[1]);
        for(int i = 2; i < n; i++){
            b[i] = max(b[i - 1], b[i - 2] + a[i]);
        }   
        cout << b[n - 1] << endl;
    }
}