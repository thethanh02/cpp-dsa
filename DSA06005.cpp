#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m), v(n+m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int>::iterator U, I, d;
        U = set_union(a.begin(), a.end(), b.begin(), b.end(), v.begin());
        for(d = v.begin(); d != U; d++) cout << *d << " ";
        cout << endl;
        I = set_intersection(a.begin(), a.end(), b.begin(), b.end(), v.begin());
        for(d = v.begin(); d != I; d++) cout << *d << " ";
        cout << endl;
    }
}
