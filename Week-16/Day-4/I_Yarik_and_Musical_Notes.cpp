#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        map<ll,int> freq;
        for(int i=0; i<n; i++)
        {
            freq[a[i]]++;
        }

        ll ans = 0, cons = 0;
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {
            cons++;
            if(i == n-1 || a[i+1] != a[i])
            {
                ans += ((cons*(cons-1LL)) /2LL);
                cons = 0;
            }
            for(ll j = 1;; j++)
            {
                ll tmp = a[i]*(1LL << j);
                if(tmp > a[n-1])
                {
                    break;
                }
                if(!freq[tmp])
                {
                    continue;
                }
                if(tmp - a[i] == j)
                {
                    ans += freq[tmp];
                }
            }
        }
        cout << ans << '\n';
        
    }

    return 0;
}