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
        ll a[n],mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        map<ll,ll> mp;
        for(int i=0; i<n; i++)
        {
            if(!mp[a[i]])
            {
                cout << a[i] << " ";
            }
            else
            {
                cout << mx << " ";
            }
            mp[a[i]]++;
        }
        cout << '\n';

    }

    return 0;
}
