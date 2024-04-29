#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = INT_MAX;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                cnt = (a[i] % k);
                ans = min(cnt, ans);
            }
        }
        if (ans == 2147483647)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << ans << '\n';
        }
    }

    return 0;
}
