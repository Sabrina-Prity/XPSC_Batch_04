#include <bits/stdc++.h>
#define ll long long
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        sort(a.begin(), a.end());
        ll ans = 0;

        for (auto c : a)
        {
            if (freq[c] > 0)
            {
                ll cnt = 0;
                ll initial = c;
                while (freq[initial] > 0)
                {
                    freq[initial]--;
                    initial++;
                    cnt++;
                }
                if (cnt > 0)
                    ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
