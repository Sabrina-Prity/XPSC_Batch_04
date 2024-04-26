#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int mn = INT_MAX, mx = INT_MIN, sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += v[j];
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);
            }
        }
        if (sum >= l && sum <= r && mx - mn >= x)
        {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}
