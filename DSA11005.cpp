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
vector<int> in, lev, h;
void PostOrder(Node *r) {
    if (!r) return;
    PostOrder(r->left);
    PostOrder(r->right);
    cout << r->data << " ";
}
Node *buildTree(int st, int en) {
    if (st > en) return NULL;
    int hei = st;
    for (int i = st; i <= en; i++) 
        if (h[in[i]] < h[in[hei]]) hei = i;
    Node *root = new Node(in[hei]);
    if (st < hei) root->left = buildTree(st, hei - 1);
    if (hei < en) root->right = buildTree(hei + 1, en);
    return root;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        in.resize(n);
        lev.resize(n);
        h.assign(1e4, -1);
        for (int &i : in) cin >> i;
        for (int i = 0; i < n; i++) {
            cin >> lev[i];
            h[lev[i]] = i;
        }
        Node *root = buildTree(0, n - 1);
        PostOrder(root);
        cout << endl;
    }
}