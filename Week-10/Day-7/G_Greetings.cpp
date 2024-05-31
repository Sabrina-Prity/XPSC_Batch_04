#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n),b(n);
        set<int> s;
        map<int,int> mp;

        pbds<int> p;
        for(int i=0; i<n; i++)
        {
            cin >> a[i] >> b[i];
            mp[a[i]] = b[i];
            p.insert(b[i]);
        }

        sort(a.begin(),a.end());

        int ans = 0;
        for(auto x: a)
        {
            int tmp = mp[x];
            int X = p.order_of_key(tmp);
            int Y = p.order_of_key(x);

            ans += (X-Y);
            p.erase(tmp);
        }
        cout << ans << '\n';
    }

    return 0;
}
