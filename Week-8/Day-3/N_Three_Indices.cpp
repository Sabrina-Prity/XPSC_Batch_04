#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        for (int i = 1; i < n - 1; i++) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                cout << "YES" << '\n';
                cout << i << " " << i + 1 << " " << i + 2 << '\n';
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
