#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll l,r;
    cin >> l >> r;

    ll n = (r-l+1)/2;
    ll gcd = 0;
    vector<pair<ll,ll>> v;
    while(l<=r)
    {
        v.push_back(make_pair(l++,r--));
    }

    for(ll i=0; i<n; i++)
    {
        gcd = __gcd(v[i].first,v[i].second);
        if(gcd > 1)
        {
            if(i+1 < n)
            {
                swap(v[i].first, v[i+1].second);
            }
        }
    }

    bool flag = false;
    for(ll i=0; i<n; i++)
    {
        gcd = __gcd(v[i].first,v[i].second);
        if(gcd == 1)
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout << "YES" << '\n';
        for(ll i=0; i<n; i++)
        {
            cout << v[i].first << " " << v[i].second << '\n';
        }
    }

    return 0;
}
