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
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());

        ll ans = 0;
        for(int i=1; i<=100; i++)
        {
            ll l = 0, r = n-1 , cnt = 0;
            while(l < r)
            {
                if(a[l] + a[r] == i)
                {
                    l++,r--;
                    cnt++;
                }
                else if(a[l] + a[r] < i)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            if(ans < cnt) 
            {
                ans = cnt;
            }    
        }
        cout << ans << '\n';
    }

    return 0;
}
