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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        ll sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += a[i];
            if(sum < 0)
            {
                sum = 0;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}
