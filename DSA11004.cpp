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
void levelOrder(Node *root) {
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node *u = q.front(); q.pop();
        cout << u->data << " ";
        if (u->left != NULL) q.push(u->left);
        if (u->right != NULL) q.push(u->right);
    }
}
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
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        Node *root = NULL;
        while (n--) {
            int n1, n2; char c;
            cin >> n1 >> n2 >> c;
            if (root == NULL) {
                root = new Node(n1);
                makeNode(root, n1, n2, c);
            } else Insert(root, n1, n2, c);
        }
        levelOrder(root);
        cout << endl;
    }
}