#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main(){
    vector<vector<ll>> C(1001, vector<ll> (1001, 1));
    for(int i = 2; i < 1001; i++)
        for(int j = 1; j < i; j++)
            C[i][j] = (C[i-1][j-1] + C[i-1][j]) % mod;

    int t;
    cin >> t;
    while(t--){
        int n, r;
        cin >> n >> r;
        cout << C[n][r] << endl;
    }
}
