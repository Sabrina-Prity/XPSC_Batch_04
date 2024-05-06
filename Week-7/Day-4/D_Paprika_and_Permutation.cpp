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
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp1[a[i]]++;
        }

        vector<int> v;
        for (auto it : mp1)
        {
            int x = it.first;
            int y = it.second;
            if (x <= n)
            {
                for (int i = 1; i < y; i++)
                {
                    v.push_back(x);
                }
                mp2[x] = 1;
            }
            else
            {
                for (int i = 1; i <= y; i++)
                {
                    v.push_back(x);
                }
            }
        }

        int cnt = 1;
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = cnt; j <= n; j++)
            {
                if (mp2[j] == 1)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            int x = (v[i] - 1) / 2;
            if (cnt <= x)
            {
                cnt++;
                ans++;
            }
            else
            {
                ans = -1;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
