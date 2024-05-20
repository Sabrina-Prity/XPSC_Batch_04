#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x >> y;

        ll ans = y/2;
        x -= ans*7;

        if(y%2)
        {
            ans++;
            x -= 11;
        }
        if(x > 0)
        {
            ans += (x+14)/15;
        }

        cout << ans << '\n';
    }

    return 0;
}
