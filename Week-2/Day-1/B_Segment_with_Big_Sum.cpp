#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin >> n >> s;
    vector<ll>a(n);

    ll total_s = 0;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        total_s += a[i];
    }
    ll l=0, r=0, ans = 1e18, sum=0;
    while(r<n)
    {
        sum += a[r];
        while(sum-a[l] >= s && l<r)
        {
            sum -= a[l];
            l++;
        }
        if(sum >= s)
        {
            ans = min(ans, r-l+1);
        }
        r++;
    }

    if(ans == 1e18)
    {
        cout <<"-1"<<'\n';
    }
    else
    {
        cout << ans <<'\n';
    }

    return 0;
}
