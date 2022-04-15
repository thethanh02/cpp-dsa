#include <bits/stdc++.h>
using namespace std;

int n, a[100];
vector<string> res;
int Check() {
    int so2 = 0;
    if (a[1] == 0) return 0;
    for (int i = 1; i <= n; i++)
        if (a[i] == 2) so2++;
    if (so2 > n / 2) return 1;
    return 0;
}
void PushBack() {
    string tmp = "";
    for (int i = 1; i <= n; i++) tmp += (a[i] + '0');
    res.push_back(tmp);
}
void Try(int i) {
    int j;
    for (j = 0; j <= 2; j++) {
        a[i] = j;
        if (i == n) {
            if (Check()) PushBack();
        }
        else Try(i + 1);
    }
}
void Preparation() {
    n = 1;
    while (res.size() <= 1000) {
        Try(1);
        n++;
    }
}
int main() {
    Preparation();

    int t, N;
    cin >> t;
    while (t--) {
        cin >> N;
        for (int i = 0; i < N; i++) 
            cout << res[i] << " ";
        cout << endl;
    }
}
