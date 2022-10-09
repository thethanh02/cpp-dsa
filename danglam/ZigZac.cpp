#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data, val;
    bool sw;
    Node *left, *right;
    Node(int data) {
        this->data = data;
        this->val = 0;
        this->sw = 0;
        this->left = NULL;
        this->right = NULL;
    }
};
int height(Node *root) {
    if (!root) return 0;
    return (1 + max(height(root->left), height(root->right)));
}
map<int, Node*> m;
void addNode(Node *root, int u, int v, int val, bool isLeft) {
    if (isLeft) {
        root->left = new Node(v);
        m[v] = root->left;
    } else {
        root->right = new Node(v);
        m[v] = root->right;
    }
    root->sw = val;
    m[u] = root;
}
int getVal(Node *root) {
    if (!root->left && !root->right) return root->val;

    bool isRight = root->sw;
    root->sw = !root->sw; // di qua 1 node thi switch thay doi nguoc lai
    if (isRight)
        return getVal(root->right);
    else
        return getVal(root->left);
    
}
void Solution(Node *root, int N, int thuong, int du) {
    long long sum_du = 0, sum_thuong = 0;
    for (int i = 0; i < N; i++) {
        int temp = getVal(root);
        cout << temp << endl;
        if (i < du) sum_du += temp;
        sum_thuong += temp;
    }
    cout << sum_du * du + sum_thuong * thuong << endl;;
}
int main() {
    int n, k;
    cin >> n >> k;
    Node *root = new Node(1);
    m[1] = root;
    for (int i = 1; i <= n; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        if (l == -1 && r == -1)
            m[i]->val = x;
        else {
            addNode(m[i] ,i, l, x, 1);
            addNode(m[i] ,i, r, x, 0);
        }
    }
    int h = height(root); // Tinh chieu cao cua cay
    int N = pow(2, h - 1); // Tinh 1 vong lap cua cay
    int thuong = k / N, du = k % N; 
    Solution(root, N, thuong, du);
}