#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int count = 1, max_count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                count++;
            } else {
                max_count = max(max_count, count);
                count = 1;
            }
        }
        char last_char = s[n - 1];
        cout << max(max_count, count) << " ";
        while (q--) {
            char c;
            cin >> c;
            if (last_char == c) {
                count++;
            } else {
                max_count = max(max_count, count);
                last_char = c; // Update last character
                count = 1;
            }
            cout << max(max_count, count) << " ";
        }
        cout << '\n';
    }

    return 0;
}
