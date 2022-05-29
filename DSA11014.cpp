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
map<int, Node*> m;
void makeNode(Node *root, int u, int v, char c) {
    if (c == 'L') {
        root->left = new Node(v);
        m[v] = root->left;
    } else {
        root->right = new Node(v);
        m[v] = root->right;
    }
    m[u] = root;
}
int SumRightLeftNodes(Node *r) {
    if (!r) return 0;
    queue<Node*> q;
    int ans = 0;
    q.push(r);
    while (!q.empty()) {
        Node *u = q.front(); q.pop();
        if (u->left) q.push(u->left);
        if (u->right) {
            Node *tmp = u->right;
            q.push(tmp);
            if (!tmp->left && !tmp->right) ans += tmp->data;
        }
    }
    return ans;
}

// int sum = 0;
// void sum_right_node(Node *root, int ok) {
//     if (root == NULL) return;
//     if (ok && root->left == NULL && root->right == NULL) sum += root->data;
//     sum_right_node(root->right, 1);
//     sum_right_node(root->left, 0);
// }
int main() {
    int t;
    cin >> t;
    while (t--) {
        m.clear();
        int n, u, v; char c;
        Node *root = NULL;
        cin >> n;
        while (n--) {
            cin >> u >> v >> c;
            if (m.find(u) == m.end()) {
                root = new Node(u);
                makeNode(root, u, v, c);
            } else makeNode(m[u], u, v, c);
        }
        // sum_right_node(root, 0);
        // cout << sum << endl;
        cout << SumRightLeftNodes(root) << endl;
    }
}