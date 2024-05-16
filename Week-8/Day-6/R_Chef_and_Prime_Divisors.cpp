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
        ll a,b;
        cin >> a >> b;
        map<ll,ll> cnt;
        for(ll i=2; i*i<=b; i++)
        {
            if(b%i == 0)
            {
                while(b%i == 0)
                {
                    cnt[i]++;
                    b /= i;
                }
            }
        }
        if(b > 1)
        {
            cnt[b]++;
        }
        bool ans = true;
        for(auto x: cnt)
        {
            if(a%x.first != 0)
            {
                ans = false;
                break;
            }
        }

        if(ans)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }

    return 0;
}
