#include <bits/stdc++.h>
using namespace std;

int n, a[100], b[100];
vector<string> s1, s2;
void PushBack() {
    string tmp = "";
    for (int i = 1; i <= n; i++) tmp += (a[i] + '0');
    s2.push_back(tmp);
}
void Try(int i) {
    int j;
    for (j = 1; j <= n; j++) {
        a[i] = j;
        if (i == n) PushBack();
        else Try(i + 1);
    }
}
int main() {
    cin >> n;
    Try(1);
    string alpha = "";
    for (int i = 0; i < n; i++) alpha += (i + 'A');
    do {
        for (int i = 0; i < s2.size(); i++) 
            cout << alpha << s2[i] << endl;
    } while (next_permutation(alpha.begin(), alpha.end()));
}