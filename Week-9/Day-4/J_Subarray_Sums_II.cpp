#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x;
    cin >> n >> x;

    vector<ll> a(n);
    ll sum = 0 , cnt = 0;
    map<ll,ll> mp;
    mp[0] = 1;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];

        sum += a[i];
        cnt += mp[sum-x];
        mp[sum]++;
    }
    cout << cnt << '\n';

    return 0;
}
