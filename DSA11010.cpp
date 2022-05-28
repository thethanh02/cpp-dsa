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
string isPerfect(Node *root) {
    queue<Node*> q;
    q.push(root);
    int s = 0, level = 0, tmp;
    while (!q.empty()) {
        s = q.size();
        if (s != int(pow(2, level))) return "No";
        tmp = s;
        while (tmp--) {
            Node *u = q.front(); q.pop();
            if (u->left) q.push(u->left);
            if (u->right) q.push(u->right);
        }
        level++;
    }
    return "Yes";
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
        cout << isPerfect(root) << endl;
    }
}