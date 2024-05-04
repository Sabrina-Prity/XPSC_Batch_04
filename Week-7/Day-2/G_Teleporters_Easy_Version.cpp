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
        ll n,c;
        cin >> n >> c;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            a[i] += (i+1);
        }

        sort(a.begin(),a.end());

        ll ans = 0, sum = 0;
        for(int i=0; i<n; i++)
        {
            if(sum+a[i] > c)
            {
                break;
            }
            else
            {
                sum += a[i];
                ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
