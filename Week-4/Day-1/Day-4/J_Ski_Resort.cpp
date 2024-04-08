#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l = 0, r = 0, cnt = 0;

        multiset<ll> m;
        vector<int> result;

        while (r < n)
        {
            m.insert(a[r]);

            if (r - l + 1 < k)
            {
                r++;
            }
            else
            {
                ll mx = *m.rbegin();
                if (mx <= q)
                    cnt++;
                else
                {
                    result.push_back(cnt);
                    cnt = 0;
                }
                auto it = m.find(a[l]);
                m.erase(it);
                l++;
                r++;
            }
        }
        result.push_back(cnt);

        ll ans = 0;
        for (auto x : result)
        {
            ans += ((x * (x + 1)) / 2);
        }

        cout << ans << '\n';
            
    }
    return 0;
}
