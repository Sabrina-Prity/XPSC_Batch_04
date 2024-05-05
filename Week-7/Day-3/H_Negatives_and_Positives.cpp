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
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll neg = 0, ans = 0, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                neg++;
            }
            ans += abs(a[i]);
            mn = min(mn, abs(a[i]));
        }
        if (neg % 2 == 1)
        {
            ans -= 2*mn;
        }

        cout << ans << '\n';
    }

    return 0;
}
