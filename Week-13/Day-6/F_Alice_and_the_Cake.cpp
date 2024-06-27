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
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> v;
        map<ll,ll> mp;
        ll sum = 0;
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
            mp[a[i]]++;
            v.push_back(a[i]);
        }
        vector<ll> v1;
        priority_queue<ll> pq;
        pq.push(sum);
        for(int i=1; i<n; i++)
        {
            while(!pq.empty() && mp[pq.top()] != 0)
            {
                v1.push_back(pq.top());
                mp[pq.top()]--;
                pq.pop();
            }
            if(!pq.empty())
            {
                ll x = pq.top();
                pq.pop();
                ll a,b;
                if(x%2 == 0)
                {
                    a = x/2;
                    b = x/2;
                }
                else
                {
                    a = x/2;
                    b = x/2 + 1;
                }
                pq.push(a);
                pq.push(b);
            }
        }

        while(!pq.empty() && mp[pq.top()]!=0)
        {
            v1.push_back(pq.top());
            mp[pq.top()]--;
            pq.pop();
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        if(v == v1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }

    }

    return 0;
}