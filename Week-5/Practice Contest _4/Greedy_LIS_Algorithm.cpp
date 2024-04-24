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
        ll n, x;
        cin >> n >> x;

        if (x >= n - 1 && x != 0)
        {
            cout << "-1" << '\n';
        }
        else
        {
            for (ll i = n; i >= x + 2; i--)
            {
                cout << i << " ";
            }
            for (ll i = 1; i <= x + 1; i++)
            {
                cout << i << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}