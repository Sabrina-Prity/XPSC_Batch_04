#include<bits/stdc++.h>
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    pbds<int> st;
    vector<vector<int>> v(26);
    map<int,int> mp;

    for(int i=0; i<n; i++)
    {
        v[s[i] - 'a'].push_back(i);
    }
    reverse(s.begin(),s.end());
    ll ans = 0;

    for(int i=0; i<n; i++)
    {
        int x = s[i] - 'a';
        int vec = v[x][mp[x]++];
        st.insert(vec);
        ll small = st.order_of_key(vec);
        vec -= small;
        ans += vec;
    }
    cout << ans << '\n';

    return 0;
}
