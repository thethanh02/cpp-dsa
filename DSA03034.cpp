#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void nhap(ll a[], int n){
    for(int i = 0; i < n; i++) cin >> a[i];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		ll a1[n], a2[m], a3[k];
		nhap(a1, n); nhap(a2, m); nhap(a3, k);
		int i, j, h;
		i = j = h = 0;
		vector <ll> a;
		while(i < n && j < m && h < k){
			if(a1[i] == a2[j] && a2[j] == a3[h]){
				a.push_back(a1[i]);
				i++; j++; h++;
			}
			else if(a1[i] < a2[j]) i++;
			else if(a2[j] < a3[h]) j++;
			else h++;
		}
		if(a.size() == 0) cout << "NO\n";
		else{
			for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
			cout << endl;
		}
	}
}
