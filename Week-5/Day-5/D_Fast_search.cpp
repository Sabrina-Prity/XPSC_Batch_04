#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll q;
    cin >> q;
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        auto it1 = lower_bound(a.begin(),a.end(), l);
        auto it2 = upper_bound(a.begin(),a.end(), r);

        cout << it2 - it1 << " ";

    }

    return 0;
}
