#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;

void createPolynomial(char s[]) {
    int h, m;
    char *p = strtok(s, "*x^+ ");
    while (p != NULL) {
        h = atoi(p); p = strtok(NULL, "*x^+ ");
        m = atoi(p); p = strtok(NULL, "*x^+ ");
        mp[m] += h;
    }
}

void print() {
    stack<pair<int, int>> st;
    for (int i = 0; i <= 10000; i++) 
        if (mp[i]) st.push({mp[i], i});
    while (!st.empty()) {
        cout << st.top().first << "*x^" << st.top().second;
        st.pop();
        if (!st.empty()) cout << " + ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        mp.clear();
        char s[10000];
        fgets(s, 10001, stdin);
        createPolynomial(s);
        fgets(s, 10001, stdin);
        createPolynomial(s);
        print();
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//     int heSo, mu;
//     Node* next;
// };

// Node* createNode(int heSo, int mu) {
//     Node* res = new Node;
//     res->heSo = heSo;
//     res->mu = mu;
//     res->next = NULL;
//     return res;
// }

// void addNode(int h, int m, Node *&start) {
//     Node *tmp = createNode(h, m);
//     if (start == NULL) {
//         start = tmp;
//         return;
//     }
//     Node *p = start;
//     while (p->next != NULL) p = p->next;
//     p->next = tmp;
// }

// void createPolynomial(char s[], Node *&start) {
//     int h, m;
//     char *p = strtok(s, "*x^+ ");
//     while (p != NULL) {
//         h = atoi(p); p = strtok(NULL, "*x^+ ");
//         m = atoi(p); p = strtok(NULL, "*x^+ ");
//         addNode(h, m, start);
//     }
// }

// int Find(Node *a, int x) {
//     while(a != NULL) {
//         if(a->mu == x) return a->heSo;
//         else if(a->mu < x) return 0;
//         a = a->next;
//     }
//     return 0;
// }

// void print(Node *a) {
//     while(a != NULL) {
//         if(a->heSo) cout << a->heSo << "*x^" << a->mu;
//         a = a->next;
//         if(a != NULL && a->heSo) cout << " + ";
//     }
//     cout << endl;
// }

// int main() {
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {
//         Node *a, *b, *ans;
//         a = b = ans = NULL;
//         char s[10000];
//         fgets(s, 10001, stdin);
//         createPolynomial(s, a);
//         fgets(s, 10001, stdin);
//         createPolynomial(s, b);
//         int maxi = max(a->mu, b->mu);
//         for (int i = maxi; i >= 0; i--) 
//             addNode(Find(a, i) + Find(b, i), i, ans);
//         print(ans);
//     }
// }