#include <bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    fst
        ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        vector<ll> a(n), p(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
            mp[i + 1] = p[i];
        }
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll pmx = INT_MIN, smx = INT_MIN;
        map<ll, ll> b;
        ll tmp = k, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (b[pb] > 0 || tmp == 0)
                break;
            b[pb]++;
            pmx = max(pmx, ((tmp * a[pb - 1]) + sum));
            sum += a[pb - 1];
            tmp--;
            if (pb - 1 < n)
                pb = mp[pb];
            else
                break;
        }
        map<ll, ll> s;
        tmp = k;
        sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[ps] > 0 || tmp == 0)
                break;
            s[ps]++;
            smx = max(smx, ((tmp * a[ps - 1]) + sum));
            sum += a[ps - 1];
            tmp--;
            if (ps - 1 < n)
                ps = mp[ps];
            else
                break;
        }
        if (pmx > smx)
            cout << "Bodya" << endl;
        else if (smx > pmx)
            cout << "Sasha" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}