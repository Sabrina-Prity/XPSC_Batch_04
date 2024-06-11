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

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll sum = 0;
        ll currentMax = a[0]; // Start with the first element as the initial max.
        
        // Iterate through the array starting from the second element.
        for (int i = 1; i < n; i++) {
            // Check if the sign is changing.
            if ((a[i] > 0 && a[i - 1] < 0) || (a[i] < 0 && a[i - 1] > 0)) {
                // Add the maximum of the previous segment to sum.
                sum += currentMax;
                // Update the current max to the new segment's first element.
                currentMax = a[i];
            } else {
                // Otherwise, keep updating the max within the same segment.
                currentMax = max(currentMax, a[i]);
            }
        }
        
        // Add the last segment's max to the sum.
        sum += currentMax;

        cout << sum << '\n';
    }

    return 0;
}
