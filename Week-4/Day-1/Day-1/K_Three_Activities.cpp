#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n),b(n),c(n);
        vector<pair<ll,ll>> mp1,mp2,mp3;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            mp1.push_back({a[i],i});
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
            mp2.push_back({b[i],i});
        }
        for(int i=0; i<n; i++)
        {
            cin >> c[i];
            mp3.push_back({c[i],i});
        }

        sort(mp1.begin(),mp1.end(),greater<>());
        sort(mp2.begin(),mp2.end(),greater<>());
        sort(mp3.begin(),mp3.end(),greater<>());

        ll ans = 0;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                {
                    if(mp1[i].second != mp2[j].second && mp1[i].second != mp3[k].second && mp2[j].second != mp3[k].second)
                    {
                        ans = max(mp1[i].first+mp2[j].first+mp3[k].first, ans);
                    }
                }
            }
        }
        cout << ans <<'\n';
    }

    return 0;
}
