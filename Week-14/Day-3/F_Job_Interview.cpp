#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll sz = n + m + 1;
        vector<ll> a(sz), b(sz);
        for (ll i = 0; i < sz; i++) 
        {
            cin >> a[i];
        }
        for (ll i = 0; i < sz; i++) 
        {
            cin >> b[i];
        }

        ll x = n, y = m;
        ll k = -1;
        bool swp = false;
        for (ll i = 0; i < sz; i++) 
        {
            if (a[i] > b[i]) x--;
            else y--;
            if (y < 0) swp = true;
            if (x < 0 || y < 0) 
            {
                k = i;
                break;
            }
        }
        if (swp) 
        {
            swap(n, m);
            swap(a, b);
        }

        ll tot = 0;
        for (ll i = 0; i < sz; i++) 
        {
            if (i == k) continue;
            if (i < k) 
            {
                tot += max(a[i], b[i]);
            } 
            else 
            {
                tot += b[i];
            }
        }

        for (ll i = 0; i < sz; i++) 
        {
            if (i == k) {
                cout << tot << " ";
            } 
            else if (i < k && a[i] > b[i]) 
            {
                ll c = tot;
                c += a[k];
                c -= a[i];
                cout << c << " ";
            } 
            else if (i < k) 
            {
                ll c = tot;
                c += b[k];
                c -= b[i];
                cout << c << " ";
            } 
            else {
                ll c = tot;
                c += b[k];
                c -= b[i];
                cout << c << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
