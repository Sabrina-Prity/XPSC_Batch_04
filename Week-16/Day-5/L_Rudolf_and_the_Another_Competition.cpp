#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll>solved;
    vector<ll>penalty;
    ll rs, rp;
    for(ll i=0; i<n; ++i)
    {
        vector<ll>a;
        for(ll j=0; j<m; ++j)
        {
            ll x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        ll time=0,pen=0,ct=0;
        for(ll x:a)
        {
            time=time+x;
            if(h>=time)
            {
                ct++;
                pen=pen+time;
            }
        }
        if(i==0)
        {
            rs=ct;
            rp=pen;
        }
        solved.push_back(ct);
        penalty.push_back(pen);
    }
    ll pos=1;
    for(ll i=1; i<n; ++i)
    {
        if(solved[i]>rs) pos++;
        else if(solved[i]==rs)
        {
            if(penalty[i]<rp) pos++;
        }
    }
    cout<<pos<<endl;
    }
}