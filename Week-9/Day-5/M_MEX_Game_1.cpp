#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n),v(n+1,0);
        int ans;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i] <= n)
            {
                v[a[i]]++;
            }
        }

        int taken = 0;
        for(int i=0; i<=n; i++)
        {
            if(v[i] == 0)
            {
                ans = i;
                break;
            }
            else if(v[i] == 1)
            {
                if(taken)
                {
                    ans = i;
                    break;
                }
                taken++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
