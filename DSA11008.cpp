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
// bool isSameLevelLeafNode(Node *root) {
//     queue<pair<Node*, int>> q;
//     q.push({root, 0});
//     int level = -1;
//     while (!q.empty()) {
//         int curLevel = q.front().second;
//         Node *u = q.front().first;
//         q.pop();
//         if (!u->left && !u->right) {
//             if (level == -1) level = curLevel;
//             else if (level != curLevel) return 0;
//         } else {
//             if (u->left) q.push({u->left, curLevel + 1});
//             if (u->right) q.push({u->right, curLevel + 1});
//         }
//     }
//     return 1;
// }
int height(Node *root) {
    if (!root) return 0;
    return (1 + max(height(root->left), height(root->right)));
}
bool check(Node *root, int level, int h) {
    if (!root) return 1;
    if (!root->left && !root->right && level < h) return 0;
    return check(root->left, level + 1, h) && check(root->right, level + 1, h);
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
        int h = height(root);
        cout << check(root, 1, h) << endl;
        // cout << isSameLevelLeafNode(root) << endl;
    }
}