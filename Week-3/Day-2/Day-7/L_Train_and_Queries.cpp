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
        vector<int> a(n);
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        while (q--)
        {
            int aj, bj;
            cin >> aj >> bj;

            if (!mp.count(aj) || !mp.count(bj))
            {
                cout << "NO" << '\n';
                continue;
            }
            if (mp[aj].front() > mp[bj].back())
            {
                cout << "NO" << '\n';
                continue;
            }

            cout << "YES" << '\n';
        }
    }

    return 0;
}
