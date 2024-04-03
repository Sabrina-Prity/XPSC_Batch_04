#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v(n, 0);
        ll sum = 0;
        for(int p = 0; p < n; p++) {
            ll cur = 0;
            ll mx = 0;
            if(s[p] == 'L')
            {
                cur = p;
            }
            else
            {
                cur = n-p-1;
            }
            if(p > (n - p - 1))
            {
                mx = p;
            }
            else
            {
                mx = n-p-1;
            }
            // ll cur = (s[p] == 'L') ? p : n - p - 1;
            // ll mx = (p > (n - p - 1)) ? p : (n - p - 1);
            sum += cur;
            ll diff = mx - cur;
            v[p] = diff;
        }

        sort(v.rbegin(), v.rend());

        // Initialize a variable to store the cumulative sum
        ll cumulative_sum = sum;
        for(int p = 0; p < n; p++) {
            // Update the cumulative sum
            cumulative_sum += v[p];
            // Output the cumulative sum
            cout << cumulative_sum << " ";
        }
        cout << '\n';
    }
    return 0;
}
