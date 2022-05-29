#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node(int a) {
        this -> data = a;
        this -> left = NULL; 
        this -> right = NULL;
    }
};
void makeNode(Node *root, int n1, int n2, char c) {
    if (c == 'L') root->left = new Node(n2);
    else if (c == 'R') root->right = new Node(n2);
}
void Insert(Node *root, int n1, int n2, char c) {
    if (root == NULL) return;
    if (root->data == n1)
        makeNode(root, n1, n2, c);
    else {
        Insert(root->left, n1, n2, c);
        Insert(root->right, n1, n2, c);
    }
}
bool isFullBTree(Node *root) {
    if (!root) return 1;
    if ((!root->left && root->right) || (root->left && !root->right)) return 0;
    if (!isFullBTree(root->left)) return 0;
    if (!isFullBTree(root->right)) return 0;
    return 1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, u, v; char c;
        Node *root = NULL;
        cin >> n;
        while (n--) {
            cin >> u >> v >> c;
            if (root == NULL) {
                root = new Node(u);
                makeNode(root, u, v, c);
            } else Insert(root, u, v, c);
        }
        cout << isFullBTree(root) << endl;
    }
}