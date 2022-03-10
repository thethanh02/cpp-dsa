#include <bits/stdc++.h>
using namespace std;
string s[] = {"02/02/2", "20/02/2", "22/02/2"};
vector<string> ds;
int n = 3, a[100];

void in() {
    sort(ds.begin(), ds.end());
    for (int i = 0; i <= ds.size(); i++) cout << ds[i] << endl;
}
void Try(int i) {
    int j;
    for (j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n) {
            for (int k = 0; k < 3; k++) {
                string tmp = s[k];
                for (int i = 1; i <= n; i++) tmp += (a[i] * 2 + '0');
                ds.push_back(tmp);
            }
        }
        else Try(i + 1);
    }
}
int main() {
    Try(1);
    in();
}

