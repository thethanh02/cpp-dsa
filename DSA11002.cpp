#include <bits/stdc++.h>
using namespace std;
struct Node {
    string data; int val;
    Node *left, *right;
    Node(string a, int b) {
        this -> data = a;
        this -> val = b;
        this -> left = NULL; 
        this -> right = NULL;
    }
};
int Caculate(int a, int b, string c) {
    if (c == "+") return a + b;
    else if (c == "-") return a - b;
    else if (c == "*") return a * b;
    return a / b;
}
void Solution(vector<string> v) {
    queue<Node*> st;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/") {
            int tmp = stoi(v[i]);
            Node *u = new Node(v[i], tmp);
            st.push(u);
        } else {
            Node *u = new Node(v[i], 0);
            u->right = st.front(); st.pop();
            u->left = st.front(); st.pop();
            u->val = Caculate(u->left->val, u->right->val, v[i]);
            st.push(u);
        }
    }
    cout << st.front()->val << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (auto &i : v) cin >> i;
        Solution(v);
    }
}