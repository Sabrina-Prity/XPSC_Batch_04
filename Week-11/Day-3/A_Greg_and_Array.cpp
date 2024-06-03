#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[100005];
long long q[100005];
long long p[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    // Ensure array size is n+1 to handle 1-based indexing
    vector<int> a(n+1);
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<pair<int, int>> range(m+1);
    vector<ll> d(m+1);

    for(int i = 1; i <= m; ++i) {
        int l, r, x;
        cin >> l >> r >> x;
        range[i] = {l, r};
        d[i] = x;
    }

    for(int i = 1; i <= k; ++i) {
        int l, r;
        cin >> l >> r;
        q[l]++;
        q[r+1]--;
    }

    for(int i = 1; i <= m; ++i) {
        q[i] += q[i-1];
    }

    for(int i = 1; i <= m; ++i) {
        d[i] = d[i] * q[i];
    }

    for(int i = 1; i <= m; ++i) {
        int x = range[i].first;
        int y = range[i].second;
        p[x] += d[i];
        p[y+1] -= d[i];
    }

    for(int i = 1; i <= n; ++i) {
        p[i] += p[i-1];
    }

    for(int i = 1; i <= n; ++i) {
        cout << p[i] + a[i] << " ";
    }
    return 0;
}
