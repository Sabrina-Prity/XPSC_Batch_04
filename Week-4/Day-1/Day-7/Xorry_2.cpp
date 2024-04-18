#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        int a = 0, b = 0;

        int bit_pos = __lg(x);
        a = 1 << bit_pos;
        b = a ^ x;

        // Find the pair with the smallest (B - A)
        int min_diff = INT_MAX;
        int ans = 0;
        for (int i = 0; i <= x; i++) {
            int a = i;
            int b = x - i;
            if ((a ^ b) == x && b >= a && (b - a) < min_diff) {
                min_diff = b - a;
                ans += 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
