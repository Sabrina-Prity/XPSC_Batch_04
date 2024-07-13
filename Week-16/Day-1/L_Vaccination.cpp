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
        int n,k,d,w;
        cin >> n >> k >> d >> w;

        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int when = -1;
        int cnt = 0;
        int ans = 0;

        for(int i=0; i<n; i++)
        {
            if(a[i] <= when+d && cnt > 0)
            {
                cnt --;
            }
            else
            {
                when = a[i]+w;
                cnt = k-1;
                ans ++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}