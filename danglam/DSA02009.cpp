// #include <bits/stdc++.h>
// using namespace std;
// int n, m, sum, s = 0;
// vector<int> a, vs;
// int Try(int index) {
//     if (index == n) {
//         if (s == sum / m) return 1;
//         return 0;
//     }
//     if (s == sum / m) {
//         s = 0;
//         index = 0;
//     }
//     for (int i = index; i < n; i++) {
//         if (!vs[i] && s + a[i] <= sum / m) {
//             vs[i] = 1;
//             s += a[i];
//             if (Try(i + 1)) return 1;
//             s -= a[i];
//             vs[i] = 0;
//         }
//     }
//     return 0;
// }
// int Solution() {
//     if (sum % m != 0) return 0;
//     if (Try(0)) return 1;
//     return 0;
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         sum = 0;
//         cin >> n >> m;
//         a.resize(n);
//         vs.assign(n, 0);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             sum += a[i];
//         }
//         cout << Solution() << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
bool isKPartitionPossibleRec(int arr[], int subsetSum[], bool taken[], int subset, int K, int N, int curIdx, int limitIdx) {
    if (subsetSum[curIdx] == subset) {
        if (curIdx == K - 2) return true;
        return isKPartitionPossibleRec(arr, subsetSum, taken, subset, K, N, curIdx + 1, N - 1);
    }

    for (int i = limitIdx; i >= 0; i--) {
        if (taken[i]) continue;
        int tmp = subsetSum[curIdx] + arr[i];

        if (tmp <= subset) {
            taken[i] = true;
            subsetSum[curIdx] += arr[i];
            bool nxt = isKPartitionPossibleRec(arr, subsetSum, taken, subset, K, N, curIdx, i - 1);

            taken[i] = false;
            subsetSum[curIdx] -= arr[i];
            if (nxt) return true;
        }
    }
    return false;
}

bool isKPartitionPossible(int arr[], int N, int K) {
    if (K == 1) return true;
    if (N < K) return false;

    int sum = 0;
    for (int i = 0; i < N; i++) 
        sum += arr[i];
    if (sum % K != 0) return false;

    int subset = sum / K;
    int subsetSum[K];
    bool taken[N];

    for (int i = 0; i < K; i++)
        subsetSum[i] = 0;

    for (int i = 0; i < N; i++)
        taken[i] = false;

    subsetSum[0] = arr[N - 1];
    taken[N - 1] = true;

    return isKPartitionPossibleRec(arr, subsetSum, taken, subset, K, N, 0, N - 1);
}

int main() {
    int arr[] = {2, 1, 4, 5, 3, 3};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 3;

    if (isKPartitionPossible(arr, N, K))
        cout << "Partitions into equal sum is possible.\n";
    else
        cout << "Partitions into equal sum is not possible.\n";
}
