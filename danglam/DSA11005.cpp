#include <bits/stdc++.h>
using namespace std;
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
int Search(int a[], int x, int n) {
    for (int i = 0; i < n; i++) 
        if (a[i] == x) return i;
    return -1;
}
void printPostOrder(int in[], int lev[], int n) {
    queue<int> q;
    q.push(lev[0]);
    while (!q.empty()) {
        int x = q.front(); q.pop();
    }
    // int x = Search(in, lev[0], n);
    // if (x > 0 && x < n) printPostOrder(in, lev + 1, x);
    // if (x != n - 1) printPostOrder(in + x + 1, lev + 1, n - x - 1);
    // cout << lev[0] << " ";
}
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
        int in[n], lev[n];
        for (int& i : in) cin >> i;
        for (int& i : lev) cin >> i;

        Node *root = NULL;
        for (int i = 0; i < n; i++) {
            int n1, n2; char c;
            
            if (root == NULL) {
                root = new Node(n1);
                makeNode(root, n1, n2, c);
            } else Insert(root, n1, n2, c);
        }
        levelOrder(root);
        cout << endl;

        printPostOrder(in, lev, n);
        cout << endl;
    }
}