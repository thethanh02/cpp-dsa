#include <bits/stdc++.h>
using namespace std;

void Solution() {
	// y = 0 && x > 0 thoả mãn
	// y = 1 && x > 1 thoả mãn
	// x < y thoả mãn
	// special x = 2 -> y >= 5 thoả mãn
	int n, m, cnt = 0;
	cin >> n >> m;
	int x[n], y[m];
	int num3 = 0, num2 = 0;
	for(int i = 0; i < n; i++) {
		cin >> x[i];
		if(x[i] == 3) num3++;
	}
	for(int i = 0; i < m; i++) {
		cin >> y[i];
		if(y[i] == 2) num2++;
	}
	cnt += num3 * num2; // x = 3 && y = 2
	sort(x, x+n); sort(y, y+m);

	int special = 0;
	for(int i = 0; i < m; i++) if(y[i] < 5 && y[i] > 2) special++;

	int i, j = 0;
	for(i = 0; i < m; i++) {
		if(y[i] > 1) break;
		while(x[j] <= y[i]) j++;
		cnt += (n - j);
	}
	int k = 0;
	for(i = j; i < n; i++) {
		while(y[k] <= x[i]) k++;
		if(k >= m) break;
		cnt += (m - k);
		if(x[i] == 2) cnt -= special;
	}
	cout << cnt << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
		Solution();
    }
    return 0;
}
