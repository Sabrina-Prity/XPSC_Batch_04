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
        ll pos_Sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i] > -1)
            {
                pos_Sum += a[i];
            }
        }
        ll ans = 0, add = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)
            {
                if(a[i] > 0)
                {
                    add = max(add, pos_Sum);
                    pos_Sum -= a[i];
                }
                else
                {
                    add = max(add, pos_Sum+a[i]);
                }
            }
            else
            {
                if(a[i] > 0)
                {
                    pos_Sum -= a[i];
                    add = max(add, pos_Sum);
                }
                else
                {
                    add = max(add, pos_Sum);
                }
            }
        }
        ans += add;
        cout << ans << '\n';
    }

    return 0;
}