#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> s(n);
        unordered_set<string> stringSet; // Store all strings for faster lookup

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            stringSet.insert(s[i]); // Insert each string into the set
        }

        vector<ll> result;
        for (int i = 0; i < n; i++)
        {
            bool valid = false;
            for (int j = 0; j < s[i].size(); j++)
            {
                string s1 = s[i].substr(0, j + 1);
                string s2 = s[i].substr(j + 1);
                // Check if both substrings are present in the set
                if (stringSet.find(s1) != stringSet.end() && stringSet.find(s2) != stringSet.end())
                {
                    valid = true;
                    break;
                }
            }
            result.push_back(valid ? 1 : 0);
        }
        for (ll r : result)
        {
            cout << r;
        }
        cout << '\n';
    }

    return 0;
}
