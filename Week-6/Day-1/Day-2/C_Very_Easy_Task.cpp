#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](long long mid)
    {
        long long cnt = 1;
        if (mid < min(x, y))
        {
            return false;
        }

        mid -= min(x, y);
        cnt += (mid / x) + (mid / y);

        return cnt >= n;
    };

    ll l = 0, r = max(x, y) * n, mid, ans = 0;
    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            // ans = mid;
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << '\n';

    return 0;
}
