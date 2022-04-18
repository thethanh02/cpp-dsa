#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--) {
        int n, k, a[110], count = 0;
        cin >> n >> k;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n-1; i++) {
            int res = k - a[i];
            for(int j=i+1; j<n; j++) {
                if(a[j] == res) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
