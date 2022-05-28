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
int isIdentical(Node *r1, Node * r2) {
    if (r1 == NULL && r2 == NULL) return 1;
    if (r1 && r2) {
        if (isIdentical(r1->left, r2->left) && (r1->data == r2->data) && isIdentical(r1->right, r2->right))
            return 1;
        return 0;
    }
    return 0;
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
    int t;
    cin >> t;
    while (t--) {
        int n1, n2, u, v; char c;
        Node *r1 = NULL, *r2 = NULL;
        cin >> n1;
        while (n1--) {
            cin >> u >> v >> c;
            if (r1 == NULL) {
                r1 = new Node(u);
                makeNode(r1, u, v, c);
            } else Insert(r1, u, v, c);
        }
        cin >> n2;
        while (n2--) {
            cin >> u >> v >> c;
            if (r2 == NULL) {
                r2 = new Node(u);
                makeNode(r2, u, v, c);
            } else Insert(r2, u, v, c);
        }
        cout << isIdentical(r1, r2) << endl;
    }
}