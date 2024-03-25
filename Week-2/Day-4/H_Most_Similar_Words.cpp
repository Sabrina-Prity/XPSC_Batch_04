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
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int cnt = 0;
                for (int k = 0; k < m; k++)
                {
                    cnt += abs(arr[i][k] - arr[j][k]);
                    //cnt += min(diff, 26 - diff);
                }
                ans = min(ans, cnt);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
