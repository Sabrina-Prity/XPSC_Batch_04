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
        string s;
        cin >> s;

        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == ':') {
                // Found a starting colon, now look for ending colons
                for (int j = i + 2; j < n; ++j) {
                    if (s[j] == ':') {
                        // Check if the substring between i and j is valid
                        bool isValid = true;
                        for (int k = i + 1; k < j; ++k) {
                            if (s[k] != ')') {
                                isValid = false;
                                break;
                            }
                        }
                        if (isValid) {
                            cnt++;
                        }
                    }
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
