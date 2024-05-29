#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        pbds<pair<int,int>> p;
        long long cnt = 0;

        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        for(int i=0; i<n; i++)
        {
            int ans = p.order_of_key({a[i], INT_MIN});
            cnt += p.size() - ans;
            p.insert({a[i],i});
        }
         cout << cnt << '\n';
    }

    return 0;
}
