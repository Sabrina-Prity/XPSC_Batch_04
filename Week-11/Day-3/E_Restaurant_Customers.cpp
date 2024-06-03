#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    // Map to store the changes in customer count at specific times
    map<int, int> d;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        d[a]++;
        d[b + 1]--;
    }

    int current_customers = 0;
    int max_customers = 0;

    for (auto it = d.begin(); it != d.end(); ++it) {
        current_customers += it->second;
        if (current_customers > max_customers) {
            max_customers = current_customers;
        }
    }

    cout << max_customers << endl;

    return 0;
}
