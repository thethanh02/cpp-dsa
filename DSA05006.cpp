#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], lis[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        lis[0] = a[0];
        for(int i = 1; i < n; i++){
            lis[i] = a[i];
            for(int j = 0; j < i; j++)
                if(a[i] > a[j])
                    lis[i] = max(lis[i], lis[j] + a[i]);
        }
        cout << *max_element(lis, lis + n) << endl;
    }
}