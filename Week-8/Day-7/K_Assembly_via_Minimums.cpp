#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll pairs = n * (n - 1) / 2;
        vector<ll> a(pairs);
        for (int i = 0; i < pairs; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll current_n = n;
        int i = 0;
        while (i < pairs) {
            cout << a[i] << " ";
            current_n--;
            i += current_n;
        }
        cout << a[pairs - 1] << '\n';
    }

    return 0;
}
