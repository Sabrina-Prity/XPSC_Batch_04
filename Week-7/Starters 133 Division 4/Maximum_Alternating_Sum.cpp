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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        int ans = 0;
        for(int i=n/2; i<n; i++)
        {
            ans += a[i];
        }
        for(int i=0; i<n/2; i++)
        {
            ans -= a[i];
        }
        cout << ans << '\n';
    }

    return 0;
}
