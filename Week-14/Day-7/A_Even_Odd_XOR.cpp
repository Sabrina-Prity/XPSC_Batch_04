#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> OMS;

#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 3) {
            cout << "2 1 3\n";
            continue;
        }

        if (n % 4 == 0) {
            ll add = (1LL << 30);
            ll curr = 1;
            for (ll i = 1; i <= n / 2; i++) {
                cout << curr << " " << curr + add << " ";
                curr++;
            }
        } else if (n % 2 == 1) {
            ll add0 = (1LL << 25);
            ll add1 = (1LL << 26);
            cout << add1 << " ";
            ll curr = 1;
            for (int i = 1; i < n / 2; i++) {
                cout << curr << " " << curr + add0 << " ";
                curr++;
            }
            if ((n / 2) % 2 == 0) add1 += add0;
            cout << (n / 2) << " " << (n / 2) + add1 << " ";
        } else {
            ll add0 = (1LL << 25);
            ll add1 = (1LL << 26);
            cout << "0 " << add1 << " ";
            ll curr = 1;
            for (ll i = 1; i <= (n / 2) - 2; i++) {
                cout << curr << " " << curr + add0 << " ";
                curr++;
            }
            cout << curr << " " << curr + add0 + add1 << " ";
        }
        cout << "\n";
    }
    return 0;
}
