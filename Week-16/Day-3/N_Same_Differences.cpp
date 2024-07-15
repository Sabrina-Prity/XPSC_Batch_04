#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x;
        map<int,ll> mp;
        ll ans = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> x;
            ans += mp[x-i];
            mp[x-i]++;
        }
        cout<< ans <<"\n";
    }

    return 0;
}