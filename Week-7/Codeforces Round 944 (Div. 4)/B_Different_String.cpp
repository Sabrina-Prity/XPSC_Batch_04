#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        string r = s;
        next_permutation(r.begin(), r.end());

        if (r == s) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            cout << r << '\n';
        }
    }

    return 0;
}
