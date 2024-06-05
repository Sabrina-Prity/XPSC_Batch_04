#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) 
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        int initial_sum = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            initial_sum += abs(a[i] - a[i + 1]);
        }

        int max_sum = initial_sum;

        for (int i = 0; i < n; i++) 
        {
            int new_sum = initial_sum;
            if (i > 0) 
            {
                new_sum -= abs(a[i] - a[i - 1]);
                new_sum += abs(1 - a[i - 1]);
            }
            if (i < n - 1) {
                new_sum -= abs(a[i] - a[i + 1]);
                new_sum += abs(1 - a[i + 1]);
            }
            max_sum = max(max_sum, new_sum);

            new_sum = initial_sum;
            if (i > 0) {
                new_sum -= abs(a[i] - a[i - 1]);
                new_sum += abs(k - a[i - 1]);
            }
            if (i < n - 1) {
                new_sum -= abs(a[i] - a[i + 1]);
                new_sum += abs(k - a[i + 1]);
            }
            max_sum = max(max_sum, new_sum);
        }

        cout << max_sum << '\n';
    }

    return 0;
}
