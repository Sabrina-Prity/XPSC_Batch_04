#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2000005;
vector<ll> v[N];
ll cnt[N];

void dfs(ll node, ll par)
{
    if (v[node].size() == 1 && node != 1)
    {
        cnt[node] = 1;
    }

    for (ll child : v[node])
    {
        if (child != par)
        {
            dfs(child, node);
            cnt[node] += cnt[child];
        }
    }
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
        for (int i = 1; i <= n; i++)
        {
            cnt[i] = 0;
            v[i].clear();
        }

        for (int i = 1; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        dfs(1, -1);
        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            cout << cnt[x] * cnt[y] << '\n';
        }
    }
}
