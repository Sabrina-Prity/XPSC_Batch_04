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
        ll even_gcd = 0, odd_gcd = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)
            {
                even_gcd = __gcd(even_gcd , a[i]);
            }
            else
            {
                odd_gcd = __gcd(odd_gcd, a[i]);
            }
        }

        bool f1 = false, f2 = false;
        for(int i=1; i<n; i+=2)
        {
            if(a[i]%even_gcd == 0)
            {
                f1 = true;
                break;
            }
        }
        for(int i=0; i<n; i+=2)
        {
            if(a[i]%odd_gcd == 0)
            {
                f2 = true;
                break;
            }
        }

        if(f1 && f2)
        {
            cout << 0 << '\n';
        }
        else if(!f1)
        {
            cout << even_gcd << '\n';
        }
        else
        {
            cout << odd_gcd << '\n';
        }
    }

    return 0;
}
