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
void AddNode(Node *&root, int u) {
    if (!root) {
        root = new Node(u);
        return;
    }
    if (root->data > u) AddNode(root->left, u); 
    else AddNode(root->right, u); 
}
void Preorder(Node *r) {
    if (!r) return;
    cout << r->data << " ";
    Preorder(r->left);
    Preorder(r->right);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, u;
        Node *root = NULL;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> u;
            AddNode(root, u);
        }
        Preorder(root);
        cout << endl;
    }
}