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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int OR = false, cnt = 0;
        for (int i = 0; i < n - k + 1; i++)
        {
            for (int j = i; j < i + k; j++)
            {
                if (a[j] % 2 != 0)
                {
                    OR = true;
                    break;
                }
            }
            if (OR == true)
            {
                 cnt++;
            }
            OR = false;
        }
        cout << cnt << '\n';
    }
    return 0;
}
