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
        string s;
        cin >> s;

        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }

        vector<int> ans(26, INT_MAX);
        for (auto &a : st)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if (s[l] == a)
                    {
                        l++;
                        cnt++;
                    }
                    else if (s[r] == a)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        cnt = -1;
                        break;
                    }
                }
            }
            if (cnt != -1)
            {
                ans[a - 'a'] = cnt;
            }
        }
        sort(ans.begin(),ans.end());
        if(ans[0] == INT_MAX)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << ans[0] << '\n';
        }
    }

    return 0;
}
