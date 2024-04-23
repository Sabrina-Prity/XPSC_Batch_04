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
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> result;

        for (int i = 0; i < n; i++)
        {
            int song, language;
            cin >> song >> language;
            if (language == l)
            {
                result.push_back(song);
            }
        }

        sort(result.begin(), result.end(), greater<int>());

        int ans = -1;
        int sz = result.size();
        if (sz >= k)
        {
            ans = 0;
            for (int i = 0; i < k; i++)
            {
                ans += result[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
