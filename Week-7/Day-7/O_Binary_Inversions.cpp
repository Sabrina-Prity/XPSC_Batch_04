#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll inversion(vector<ll> a, ll n)
{
    ll cnt = 0, one = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 1)
        {
            one++;
        }
        else
        {
            cnt += one;
        }
    }
    return cnt;
}

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

        ll ans = inversion(a,n);
        int indx = -1;
        for(int i=0; i<n; i++)
        {
            if(a[i] == 0)
            {
                a[i] = 1;
                indx = i;
                break;
            }
        }
        ans = max(ans, inversion(a,n));
        if(indx != -1)
        {
            a[indx] = 0;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(a[i] == 1)
            {
                a[i] = 0;
                break;
            }
        }
        ans = max(ans, inversion(a,n));
        cout << ans << '\n';
    }

    return 0;
}
