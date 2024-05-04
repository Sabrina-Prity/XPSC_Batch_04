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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        bool possible = true;
        int zero = 0;
        int diff;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                possible = false;
                break;
            }
            if (b[i] == 0)
            {
                zero++;
            }
            if (a[i] >= b[i] && b[i])
            {
                diff = a[i] - b[i];
            }
        }

        if (!possible)
        {
            cout << "NO" << '\n';
            continue;
        }
        if (zero == n)
        {
            cout << "YES" << '\n';
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if ((b[i] && a[i] - b[i] != diff) || (b[i] == 0 && a[i] > diff))
            {
                possible = false;
                break;
            }
        }

        if (possible)
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
