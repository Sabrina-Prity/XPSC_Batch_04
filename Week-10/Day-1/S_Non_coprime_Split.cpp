#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll getPrime(ll n) {
    // If n is divisible by 2, then return 2.
    if (n % 2 == 0) {
        return 2;
    }
    // Check for other factors starting from 3.
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return i;
        }
    }
    // If no factors are found, n itself is prime.
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;

        if (r <= 3) {
            cout << -1 << '\n';
        } else {
            if (l < r) {
                if (r % 2 != 0) {
                    r--;
                }
                cout << 2 << " " << r - 2 << '\n';
            } else { // when l == r
                ll prime = getPrime(l);
                if (prime == l) { // l itself is prime
                    cout << -1 << '\n';
                } else {
                    cout << prime << " " << l - prime << '\n';
                }
            }
        }
    }

    return 0;
}
