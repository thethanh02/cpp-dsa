#include <bits/stdc++.h>
using namespace std;

int a[100][100], chuaxet[100], e[100];

void DFS(int u) {
    chuaxet[u] = 1;
    cout << u << " ";
    for (int i = 1; i < 100; i++) {
        if (chuaxet[i] == 0 && a[u][i] == 1) {
            e[i] = u;
            DFS(i);
        }
    }
}

void BFS(int u) {
    queue <int> Q;
    Q.push(u);
    chuaxet[u] = 1;

    while (!Q.empty()) {
        int x = Q.front();
        Q.pop();
        cout << x << " ";
        for (int i = 1; i < 100; i++) {
            if (chuaxet[i] == 0 && a[u][i] == 1) {
                Q.push(i);
                e[i] = x;
                chuaxet[i] = 1;
            }
        }
    }
}

int TPLT_DFS(int a[100][100]) {
    int cnt = 0;
    for (int i = 1; i < 100; i++) {
        if (chuaxet[i] == 0) {
            DFS(i);
            cnt++;
        }
    }
    return cnt;
}

int TPLT_BFS(int a[100][100]) {
    int cnt = 0;
    for (int i = 1; i < 100; i++) {
        if (chuaxet[i] == 0) {
            BFS(i);
            cnt++;
        }
    }
    return cnt;
}

int T_DFS(int a[100][100]) {
    // cay khung goc tai dinh 1 theo dfs
    if (TPLT_DFS(a) == 1) {
        DFS(1); // in ra cay khung
        return 1;
    }
    return 0; // khong co cay khung
}

int T_BFS(int a[100][100]) {
    // cay khung goc tai dinh 1 theo bfs
    if (TPLT_BFS(a) == 1) {
        BFS(1); // in ra cay khung
        return 1;
    }
    return 0; // khong co cay khung
}

void EULER(int a[100][100]) {
    stack <int> st, CE;
    st.push(1);
    while (!st.empty()) {
        int kt = 1, u = st.top();
        for (int v = 1; v < 100; v++) {
            if (a[u][v] == 1) {
                st.push(v);
                a[u][v] = a[v][u] = 0;
                kt = 0;
                break;
            }
        }

        if (kt) {
            CE.push(u);
            st.pop();
        }
    }
    while (!CE.empty()) {
        cout << CE.top() << " ";
        CE.pop();
    }
}

typedef pair <int, int> pi;

void DIJKSTRA(int u) {
    vector <vector <pi>> M(100);
    for (int i = 1; i < 100; i++) {
        for (int j = 1; j < 100; j++) {
            if (a[i][j] < 1e9) {
                M[i].push_back({ a[i][j], j });
            }
        }
    }
    priority_queue <pi, vector <pi>, greater <pi>> Q;
    vector <int> d(100, 1e9), e(100, 0);

    Q.push({ 0, u });
    d[u] = 0;

    while (!Q.empty()) {
        int x = Q.top().second;
        Q.pop();

        for (int i = 0; i < M[x].size(); i++) {
            int d_x_v = M[x][i].first, v = M[x][i].second;
            if (d[v] > d[x] + d_x_v) {
                d[v] = d[x] + d_x_v;
                e[v] = x;
                Q.push({ d[v], v });
            }
        }
    }
    for (int i = 1; i < 100; i++) {
        cout << d[i] << " ";
    }
}

void FLOYD(int a[100][100]) {
    for (int i = 1; i < 100; i++) {
        for (int j = 1; j < 100; j++) {
            for (int k = 1; k < 100; k++) {
                a[j][k] = min(a[j][k], a[j][i] + a[i][k]);
            }
        }
    }

    for (int i = 1; i < 100; i++) {
        for (int j = 1; j < 100; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void PRIM(int a[100][100], int u) {

}

int main() {

}