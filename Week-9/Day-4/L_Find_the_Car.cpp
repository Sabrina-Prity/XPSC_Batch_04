#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k + 1), b(k + 1);
        
        for (int i = 1; i <= k; i++) 
        {
            cin >> a[i];
        }
        for (int i = 1; i <= k; i++) 
        {
            cin >> b[i];
        }
        
        a[0] = 0; 
        b[0] = 0; 

        while (q--) 
        {
            ll d;
            cin >> d;

            auto it = lower_bound(a.begin(), a.end(), d);
            ll x = it - a.begin();

            if (x < a.size() && a[x] == d)
            {
                cout << b[x] << " ";
            } 
            else 
            {
                if (x == 0) 
                {
                    cout << b[0] << " ";
                } 
                else 
                {
                    
                    ll r = a[x] - a[x - 1];
                    ll l = b[x] - b[x - 1];
                    ll ans = b[x - 1] + ((d - a[x - 1]) * l) / r;
                    cout << ans << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
