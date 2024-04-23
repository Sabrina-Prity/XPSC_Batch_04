#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Binary_Search(vector<ll> &a, ll key)
{
    ll l = 0, r = a.size() - 1, mid, ans = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (key == a[mid])
        {
            ans = mid;
            break;
        }
        else if (key < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (ans == -1)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> key(k);
    for (int i = 0; i < k; i++)
    {
        cin >> key[i];
    }

    for (int i = 0; i < k; i++)
    {                             
        Binary_Search(a, key[i]);
    }

    return 0;
}
