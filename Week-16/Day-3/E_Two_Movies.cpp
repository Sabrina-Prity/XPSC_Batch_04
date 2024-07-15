#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(n);
        for (ll &x : a)
        {
            cin >> x;
        }

        map<ll, pair<ll, ll>> diffs;
        map<ll, ll> c;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (diffs.find(a[i] - b[i]) != diffs.end())
            {
                if (b[i] < (diffs[a[i] - b[i]]).first)
                    diffs[a[i] - b[i]] = {b[i], i};
            }
            else
                diffs[a[i] - b[i]] = {b[i], i};
        }

        vector<ll> cc(m);
        for (ll &x : cc)
        {
            cin >> x;
            c[x]++;
        }

        ll ans = 0;
        for (auto &[diff, temp] : diffs)
        {
            auto [bi, i] = temp;
            auto it = c.lower_bound(a[i]);

            while (it != c.end())
            {
                ll cnt = (*it).second;
                ll ci = (*it).first;
                ll curr = (ci - bi) / diff;
                ans += 2 * curr * cnt;
                c.erase(it);
                c[ci - curr * diff] += cnt;
                it = c.lower_bound(a[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
