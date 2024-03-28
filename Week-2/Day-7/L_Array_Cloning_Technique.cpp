
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }
        int mx_val = INT_MIN;
        for (auto &[x, y] : freq)
        {
            mx_val = max(mx_val, y);
        }
        // cout << mx_val << endl;
        int ans = n- mx_val;
        int cnt = 0;
        while(mx_val!=n)
        {
            cnt++;
            if(mx_val*2 >= n)
            {
                break;
            }
            mx_val = mx_val*2;
        }
        cout << ans+cnt <<'\n';

        // for (auto it = freq.begin(); it != freq.end(); it++) {
        //     cout << it->first << " : " << it->second << "\n";
        // }
    }

    return 0;
}
