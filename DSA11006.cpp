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
int height(Node *root) {
    if (!root) return 0;
    return (1 + max(height(root->left), height(root->right)));
}
void SpiralOrder(Node *r) {
    int h = height(r);
    vector<vector<int>> res(h);
    queue<pair<Node*, int>> q;
    q.push({r, 0});
    while (!q.empty()) {
        Node *u = q.front().first; 
        int lv = q.front().second;
        q.pop();
        res[lv].push_back(u->data);
        if (u->left) q.push({u->left, lv + 1});
        if (u->right) q.push({u->right, lv + 1});
    }
    for (int i = 0; i < h; i++) {
        if (i % 2 == 1)
            for (int j = 0; j < res[i].size(); j++) 
                cout << res[i][j] << " ";
        else 
            for (int j = res[i].size() - 1; j >= 0; j--) 
                cout << res[i][j] << " ";
    }
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
        SpiralOrder(root);
        cout << endl;
    }
}