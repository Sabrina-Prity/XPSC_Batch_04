#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N, K;  // Length of binary string and required number of islands
        cin >> N >> K;

        // Calculate the minimum length needed to fit K distinct islands
        int minLength = (K * (K + 1)) / 2;

        // Check if N is large enough to fit the required number of islands with distinct lengths
        if (N >= minLength + K - 1) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
