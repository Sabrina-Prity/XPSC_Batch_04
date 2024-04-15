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
        ll a,b;
        cin >> a >> b;

        ll mx = max(a,b);

        if(a == b)
        {
            cout << 0 <<'\n';
        }
        else
        {
            ll ans = (a^mx) + (b^mx);
            cout << ans << '\n';
        }
    }

    return 0;
}
