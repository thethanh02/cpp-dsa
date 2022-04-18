#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, l, r;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        for(int i = 0; i < n; i++)
            if(b[i] != a[i]){
                l = i + 1;
                break;
            }
        for(int i = n-1; i >=0; i--)
            if(b[i] != a[i]){
                r = i + 1;
                break;
            }
        cout << l << " " << r << endl;
    }
}
