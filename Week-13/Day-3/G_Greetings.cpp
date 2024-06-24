#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<pair<int,int>> ok(vector<pair<int,int>> &v)
{
    vector<int> temp;
    for(auto i : v)
    {
        temp.push_back(i.first);
        temp.push_back(i.second);
    }
    sort(temp.begin(),temp.end());

    map<int,int> vis;
    for(int i=0; i<temp.size(); i++)
    {
        vis[temp[i]] = i+1;
    }

    vector<pair<int,int>> ans;
    for(auto i: v)
    {
        ans.push_back({vis[i.first], vis[i.second]});
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<pair<int,int>> v;
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin >> x >> y;
            v.push_back({x,y});
        }

        v = ok(v);

        pbds<int> res;
        int cnt = 0;
        sort(v.begin(),v.end());
        for(auto i : v)
        {
            int l = i.first;
            int r = i.second;
            int val = res.order_of_key(r+1);
            cnt += res.size() - val;
            res.insert(r);
        }

        cout << cnt << '\n';
    }

    return 0;
}
