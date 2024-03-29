#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin >> n >> s;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    map<ll,ll> mp;
    ll l=0, r = 0, cnt = 0;
    while(r<n)
    {
        mp[a[r]]++;
        while(mp.size() > s)
        {
            mp[a[l]]--;
            if(mp[a[l]] == 0)
            {
                mp.erase(a[l]);
            }
            l++;
        }
        cnt += (r-l+1);
        r++;
    }
    cout << cnt << '\n';

    return 0;
}
