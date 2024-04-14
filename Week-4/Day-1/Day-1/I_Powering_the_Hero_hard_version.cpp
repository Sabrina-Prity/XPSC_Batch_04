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
        priority_queue<ll> q;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x != 0)
                q.push(x);
            else if (x == 0 && !q.empty())
            {
                ans += q.top();
                q.pop();
            }
        }

        cout << ans << endl;
    }

    return 0;
}
