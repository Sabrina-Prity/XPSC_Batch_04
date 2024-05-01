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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        if ((n < 4) || (m < 4) || (n + m) < 11)
        {
            cout << -1 << '\n';
            continue;
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        ll sum = 0;
        vector<ll> ans;

        for (ll i = 0; i < 4; i++)
        {
            sum += a[i];
            sum += b[i];
        }

        for (ll i = 4; i < n; i++)
        {
            ans.push_back(a[i]);
        }
        for (ll i = 4; i < m; i++)
        {
            ans.push_back(b[i]);
        }

        sort(ans.rbegin(), ans.rend());

        for (ll i = 0; i < 3; i++)
        {
            sum += ans[i];
        }

        cout << sum << '\n';
    }

    return 0;
}
