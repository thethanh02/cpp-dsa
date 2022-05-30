#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node() {
        this -> data = 0;
        this -> left = NULL; 
        this -> right = NULL;
    }
};
void PostOrder(Node *r) {
    if (!r) return;
    PostOrder(r->left);
    PostOrder(r->right);
    cout << r->data << " ";
}
int cnt = 0;
Node *buildPreOrderBST(int *a, int n) {
    if (n <= 0) return NULL;
    Node *root = new Node;
    root->data = a[0];
    int i = 0;
    for (i = 1; i < n; i++) 
        if (a[i] > a[0]) break;
    root->left = buildPreOrderBST(&a[1], i - 1);
    root->right = buildPreOrderBST(&a[i], n - i);
    if (!root->left && !root->right) cnt++;
    return root;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int &i : a) cin >> i;
        cnt = 0;
        Node *root = buildPreOrderBST(a, n);
        cout << n - cnt << endl;
    }
}