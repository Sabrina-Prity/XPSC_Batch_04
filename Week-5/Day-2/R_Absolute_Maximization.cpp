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
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int mx = v[0];
        int mn = v[0];
         for(int i=1; i<n; i++)
        {
            mx |= v[i];
            mn &= v[i];
        }
        int ans = mx - mn;
        cout << ans << '\n';
    }

    return 0;
}
