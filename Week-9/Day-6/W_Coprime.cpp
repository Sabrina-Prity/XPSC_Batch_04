#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> cop(1001);
    for (int i = 1; i <= 1000; i++) {
        for (int j = i + 1; j <= 1000; j++) {  // j starts from i + 1 to avoid repetition
            if (__gcd(i, j) == 1) {
                cop[i].push_back(j);
                cop[j].push_back(i);  // Add both ways since coprime relation is mutual
            }
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<int> mx(1001, -1);  // Use 1001 to match the 1000 limit
        for (int i = 1; i <= n; i++) {
            mx[a[i]] = i;
        }

        int ans = 0;
        for (int i = 1; i <= 1000; i++) {
            if (mx[i] == -1) continue;

            if (i == 1) {
                ans = max(ans, 2 * mx[i]);
                continue;
            }

            for (auto x : cop[i]) {
                if (mx[x] != -1) {
                    ans = max(ans, mx[i] + mx[x]);
                }
            }
        }

        if (ans == 0) {
            ans = -1;
        }
        cout << ans << '\n';
    }

    return 0;
}
