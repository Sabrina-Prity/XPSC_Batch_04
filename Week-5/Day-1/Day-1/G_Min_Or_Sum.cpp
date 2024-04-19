#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        ll x=0;
        for(int i=0; i<n; i++)
        {
            x |= a[i];
        }
        cout << x << '\n';

    }

    return 0;
}
