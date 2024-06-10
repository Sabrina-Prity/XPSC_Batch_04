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
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        vector<ll> pre(n);
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                pre[i] = a[i];
            }
            else
            {
                pre[i] = pre[i-1] + a[i];
            }
        }

        ll ans =0;
        for(int i=1; i<n; i++)
        {
            ans = max(ans, __gcd(pre[i-1] , pre[n-1] - pre[i-1]));
        }
        cout << ans << '\n';
    }

    return 0;
}
