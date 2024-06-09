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
        int n,k;
        cin >> n >> k;

        map<int,int> mp;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            for(int i=0; i<31; i++)
            {
                if(x & 1)
                {
                    mp[i]++;
                }
                x = x >> 1;
            }
        }

        ll ans = 0;
        for(int i=30; i>=0; i--)
        {
            int y = n - mp[i];
            if(k >= y)
            {
                ans += pow(2,i);
                k -= y;
            }
        }
        cout << ans << '\n';

    }

    return 0;
}
