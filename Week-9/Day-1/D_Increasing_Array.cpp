#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0 , mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
       mx = max(mx , a[i]);
       ans += mx - a[i];
    }
    cout << ans << '\n';

    return 0;
}
