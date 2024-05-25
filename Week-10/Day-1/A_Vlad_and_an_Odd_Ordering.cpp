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
        ll n , k;
        cin >> n >> k;

        ll cnt = 1L;
        while((k-(n-n/2)) >= 1)
        {
            k -= (n-n/2);
            n /= 2;
            cnt *= 2L;
        }

        ll ans = (2L*k-1L)*cnt;
        cout << ans << '\n';
    }

    return 0;
}
