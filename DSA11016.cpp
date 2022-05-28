// ngan gon la in ra mang da sort :)
// con bai duoi day la lam dung nhu yeu cau de: binaryTree_to_BST
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
void printInOrder(Node *root) {
    if (!root) return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}
void Store(Node *root, vector<int> &v) {
    if (!root) return;
    Store(root->left, v);
    v.push_back(root->data);
    Store(root->right, v);
}
void Trans(int &idx, Node *root, vector<int> &v) {
    if (!root) return;
    Trans(idx, root->left, v);
    root->data = v[idx];
    Trans(++idx, root->right, v);
}
Node *binaryTree_to_BST(Node *root) {
    vector<int> v;
    int idx = 0;
    if (!root) return root;
    Store(root, v);
    sort(v.begin(), v.end());
    Trans(idx, root, v);
    return root;
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
        Node *res = binaryTree_to_BST(root);
        printInOrder(res);
        cout << endl;
    }
}