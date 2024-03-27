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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);

        for (char c : s)
        {
            freq[c - 'a']++;
        }

        int oddCount = 0;
        for (int f : freq)
        {
            if (f % 2 != 0)
            {
                oddCount++;
            }
        }

        if (oddCount == k || oddCount == k + 1 || oddCount < k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
