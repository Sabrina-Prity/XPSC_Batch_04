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

        int freq[10] = {0}; // Frequency array for digits 0-9
        vector<int> e;
        for (int i = 0; i < n; i++)
        {
            int digit = a[i] % 10;
            if (freq[digit] == 0)
            {
                e.push_back(digit);
            }
            freq[digit]++;
        }

        bool ok = false;

        // Check if any digit 1 appears at least 3 times
        if (freq[1] >= 3)
        {
            ok = true;
        }

        // Check for two digits the same and one different that sum to a multiple of 10 plus 3
        for (int i = 0; i < e.size(); i++)
        {
            if (freq[e[i]] >= 2)
            {
                for (int j = 0; j < e.size(); j++)
                {
                    if (e[j] == e[i])
                        continue;
                    if ((2 * e[i] + e[j]) % 10 == 3)
                    {
                        ok = true;
                    }
                }
            }
        }

        // Check all unique triplets
        for (int i = 0; i < e.size(); i++)
        {
            for (int j = i + 1; j < e.size(); j++)
            {
                for (int k = j + 1; k < e.size(); k++)
                {
                    if ((e[i] + e[j] + e[k]) % 10 == 3)
                    {
                        ok = true;
                    }
                }
            }
        }

        if (ok)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
