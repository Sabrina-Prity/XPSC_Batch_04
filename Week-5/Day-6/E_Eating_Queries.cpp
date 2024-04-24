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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<>());

        long long pre[n];
        pre[0] = v[0];

        for (int i = 1; i < n; i++)
        {
            pre[i] = v[i] + pre[i - 1];
        }

        while (q--)
        {
            long long x;
            cin >> x;
            if (x > pre[n - 1])
            {
                cout << -1 << '\n';
            }
            else
            {
                long long l = 0, r = n - 1, mid, ans = -1;
                while (l <= r)
                {
                    mid = (l + r) / 2;
                    if (x <= pre[mid])
                    {
                        ans = mid;
                        r = mid - 1;
                    }
                    else
                    {
                        l = mid + 1;
                    }
                }
                cout << ans + 1 << '\n';
            }
        }
    }

    return 0;
}
