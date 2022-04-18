#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a[100001], m = numeric_limits<int>::max();;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i=1; i<n; i++){
            int sub = a[i] - a[i-1];
            if(m > sub) m = sub;
        }
        cout << m << endl;
    }
}
