#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node(int a) {
        data = a;
        left = right = NULL;
    }
};
template <class X> void print(X a) {
    for (auto i : a) cout << i << " ";
    cout << endl;
}
int Search(vector<int> In, vector<int> Lev, int st, int en) {
    for (int i = st; i <= en; i++) 
        if (Lev[0] == In[i]) 
            return i;
    return -1;
}
Node* buildTree(vector<int> In, vector<int> Lev, int st, int en, int n) {
    if (n <= 0) return NULL;
    Node* root = new Node(Lev[0]);

    int idx = Search(In, Lev, st, en);
    unordered_set<int> s;
    for (int i = st; i < idx; i++)
        s.insert(In[i]);
    // print(s);
    vector<int> lLev, rLev;
    for (int i = 1; i < n; i++) {
        if (s.find(Lev[i]) != s.end()) lLev.push_back(Lev[i]);
        else rLev.push_back(Lev[i]);
    }
    // print(lLev);
    // cout << st << " " << idx << " " << en << endl;
    // print(rLev);
    root->left = buildTree(In, lLev, st, idx - 1, idx - st);
    root->right = buildTree(In, rLev, idx + 1, en, en - idx);
    return root;
}

void printPostorder(Node* r) {
    if (!r) return;
    printPostorder(r->left);
    printPostorder(r->right);
    cout << r->data << " ";
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> In(n), Lev(n);
        for (int &i : In) cin >> i;
        for (int &i : Lev) cin >> i;
        Node* root = buildTree(In, Lev, 0, n - 1, n);
        // printPostorder(root);
        cout << endl;
    }
}
