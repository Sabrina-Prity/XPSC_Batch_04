#include<bits/stdc++.h>
#define ll long long
using namespace std;


// const int mod = 1'000'000'007;
const int mod = 1e9+7;

ll ok(ll a, ll b)
{
    ll x = 1;
    while(b > 0)
    {
        if(b&1)
        {
            x *= a;
            x %= mod;
        }
        a = a*a;
        a %= mod;
        b >>= 1;
    }
    return x % mod;
}
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        ll ans = 0;
        for(int i=0; i<64; i++)
        {
            if(((ll)1<<i) & k)
            {
                ans += ok(n,i);
            }
        }
        cout << ans % mod << '\n';
    }

    return 0;
}
