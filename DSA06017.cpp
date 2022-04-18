#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--) {
        int n, m, x;
        vector<int> v;
        cin >> n >> m;
        while(n--) {
            cin >> x;
            v.push_back(x);
        }
        while(m--) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
