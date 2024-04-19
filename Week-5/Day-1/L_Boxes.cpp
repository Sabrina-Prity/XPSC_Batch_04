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
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        vector<ll> v;
        map<ll, ll> mp;

        for (int i = 0; i < n; i++)
        {
            ll x = __lg(a[i]) + 1;
            mp[x]++;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        ll x = mp[v[v.size() - 1]];
        cout << (x + 1) / 2 << endl;
    }

    return 0;
}
