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
        vector<ll> a(n),b(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }

        vector<ll> ans(n);
        for(int i=0; i<n; i++)
        {
            ans[i] = a[i]-b[i];
        }

        int mx = *max_element(ans.begin(),ans.end());

        vector<ll> result;
        for(int i=0; i<n; i++)
        {
            if(ans[i] == mx)
            {
                result.push_back(i+1);
            }
        }
        cout << result.size() << '\n';
        for(auto x: result)
        {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}