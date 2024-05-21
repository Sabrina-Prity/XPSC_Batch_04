#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n);
    for(ll i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    map<ll, ll> mp;
    mp[0] = 1; 
    ll sum = 0, cnt = 0;

    for(ll i = 0; i < n; i++) 
    {
        sum += a[i];
        ll mod = ((sum % n) + n) % n; 
        cnt += mp[mod];
        mp[mod]++;
    }

    cout << cnt << '\n';

    return 0;
}
