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
        map<int, int> freq;
        int uniq = n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            if (freq[a[i]] > 2)
            {
                uniq--;
            }
        }

        int ans = (uniq + 1) / 2;
        cout << ans << '\n';
    }

    return 0;
}
