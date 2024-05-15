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

        ll sum_of_first_9 = 45; 
        ll x = n / 9;
        ll y = n % 9;

        ll total_sum = x * sum_of_first_9;
        for (ll i = 1; i <= y; i++) 
        {
            total_sum += i;
        }

        cout << total_sum << '\n';
    }

    return 0;
}
