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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        
        map<int, int>m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]+=1;
        }
        // rep(i, n)cout<<m1[x*a[i]]<<endl;
        int ans = 0;
        for(int i = n-1;i>=0;i--){
            if(m[a[i]]){
            if(m[x*a[i]]){
                m[x*a[i]]--;
            }
            else{
                ans++;
            }
            m[a[i]]--;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
