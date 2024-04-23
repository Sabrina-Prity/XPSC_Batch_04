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

        int om = 0, om_max = 0;
        int addy = 0, addy_max = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                om++;
                om_max = max(om_max, om);
            }
            else
            {
                om = 0;
            }
            if (b[i] > 0)
            {
                addy++;
                addy_max = max(addy_max, addy);
            }
            else
            {
                addy = 0;
            }
        }

        if (om_max > addy_max)
        {
            cout << "Om" << '\n';
        }
        else if (om_max < addy_max)
        {
            cout << "Addy" << '\n';
        }
        else
        {
            cout << "Draw" << '\n';
        }
    }

    return 0;
}
