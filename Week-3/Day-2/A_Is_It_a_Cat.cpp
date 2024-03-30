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
        string s;
        cin >> n >> s;
        for (auto &x : s)
        {
            x = tolower(x);
        }
        auto it = unique(s.begin(), s.end());

        s.resize(distance(s.begin(), it));
        // cout << s << endl;
        string s2 = "meow";
        (s == s2) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }

    return 0;
}