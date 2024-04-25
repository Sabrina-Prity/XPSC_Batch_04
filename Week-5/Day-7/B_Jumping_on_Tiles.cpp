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
        string s;
        cin >> s;
        int n = s.size();

        vector<int> a[26];
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a'].push_back(i);
        }

        int first = s[0] - 'a';
        int last = s[n - 1] - 'a';

        vector<int> ans;
        if (first < last)
        {
            for (int i = first; i <= last; i++)
            {
                for (auto j : a[i])
                {
                    ans.push_back(j + 1);
                }
                if(i==last) break;
                    
            }
        }
        else
        {
            for (int i = first; i >= last; i--)
            {
                 for (auto j : a[i])
                {
                    ans.push_back(j + 1);
                }
                if(i==last) break;
            }
        }

        cout << abs(last - first) << ' ' << ans.size() << endl;
        for (auto n : ans)
        {
            cout << n << ' ';
        }
        cout << endl;
    }

    return 0;
}
