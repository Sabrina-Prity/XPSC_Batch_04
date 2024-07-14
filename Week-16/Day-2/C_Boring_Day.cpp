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
        ll n,l,r;
        cin >> n >> l >> r;
        
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0, ans = 0, start = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] > r)
            {
                sum =0;
                start = i+1;
                continue;
            }
            sum += a[i];
            while(sum > r)
            {
                sum -= a[start];
                start++;
            }
            if(sum >= l && sum <= r)
            {
                ans++;
                sum = 0;
                start = i+1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}