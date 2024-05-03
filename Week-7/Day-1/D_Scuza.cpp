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
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n + 1), m(n + 1), pre(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pre[i] = pre[i - 1] + a[i];
            m[i] = max(m[i - 1], a[i]);
        }

        while (q--)
        {
            ll x,ans = 0;
            cin >> x;

            int k = upper_bound(m.begin(), m.end(), x) - m.begin() - 1;
            if (k >= 0)
            {
                ans = pre[k];
            }
            cout << ans << " ";
        }
        cout << '\n';
    }

    return 0;
}
