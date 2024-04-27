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
        vector<ll> a(n + 1);
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        vector<ll> pre(n + 1);
        for (int i = 1; i <= n; i++)
        {
            pre[i] = a[i] + pre[i - 1];
        }
        pre[0] = a[0];

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            ll ans = sum - ((pre[r] - pre[l - 1]) + (k * (r - l + 1)));

            if (ans % 2 == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}