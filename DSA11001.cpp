#include <bits/stdc++.h>
using namespace std;
struct Node {
    char data;
    Node *left, *right;
    Node(char a) {
        this -> data = a;
        this -> left = NULL; 
        this -> right = NULL;
    }
};
void InOrder(Node* r) {
    if (!r) return;
    InOrder(r->left);
    cout << r->data;
    InOrder(r->right);
}
void Solution(string s) {
    stack<Node*> st;
    for (char i : s) {
        if (isalpha(i)) st.push(new Node(i));
        else {
            Node *u = new Node(i);
            u->right = st.top(); st.pop();
            u->left = st.top(); st.pop();
            st.push(u);
        }
    }
    InOrder(st.top());
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution(s);
        cout << endl;
    }
}