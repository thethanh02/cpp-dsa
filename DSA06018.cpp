#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--) {
        int n, a[100001], d[100001] = {0};
        int min = 100001, max = 0, res = 0;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(min > a[i]) min = a[i];
            if(max < a[i]) max = a[i];
            d[a[i]]++;
        }
        for(int i=min; i<=max; i++)
            if(d[i] == 0) res++;
        cout << res << endl;
    }
    return 0;
}
