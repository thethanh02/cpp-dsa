#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        float a[n], b[n];
        int lis[n];
        for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
        lis[0] = 1;
        for(int i = 1; i < n; i++){
            lis[i] = 1;
            for(int j = 0; j < i; j++)
                if(a[i] > a[j] && b[i] < b[j])
                    lis[i] = max(lis[i], lis[j]+1);
        }
        cout << *max_element(lis, lis+n) << endl;
    }
}