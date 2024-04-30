#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool ok(vector<int> a, int n, int k)
{
    multiset<int> s;
    for (int i=0; i<n; i++)
    {
        s.insert(a[i]);
    }

    for (int i = 1; i <= k; i++)
    {
        if (s.empty())
        {
            return false;
        }
        int range = k - i + 1;
        auto x = s.upper_bound(range);
        if (x == s.begin())
        {
            return false;
        }
        x--;

        s.erase(x);
        if (!s.empty())
        {
            x = s.begin();
            ll v = (*x);
            v += (range);
            s.erase(x);
            s.insert(v);
        }
    }
    return true;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll k;
        ll l = 0, r = n;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (ok(a, n, mid))
            {
                k = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << k << '\n';
    }

    return 0;
}
