#include<bits/stdc++.h>
#define ll long long

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        vector<ll> a(n);
        vector<ll> v;
        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            ans += a[i] / k;
            v.push_back(a[i]%k);
        }

        sort(v.begin(),v.end());

        ll l = 0, r = n-1;
        while(l < r)
        {
            if(v[l] + v[r] >= k)
            {
                ans++;
                l++;
                r--;
            }
            else
            {
                l++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}