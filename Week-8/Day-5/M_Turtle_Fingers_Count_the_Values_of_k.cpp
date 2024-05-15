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
        ll a,b,l;
        cin >> a >> b >> l;

        vector<ll> k ;
        for(ll i=1; i*i<=l; i++)
        {
        if(l%i == 0)
        {
            k.push_back(i);
            if((l/i) != i)
            {
                k.push_back(l/i);
            }
        }
        }

        vector<ll> x,y;
        ll z,cnt = 0;
        for(ll i=0; i<=20; i++)
        {
            z = pow(a,i);
            if (z > l) break;
            x.push_back(z);
        }
        for(ll i=0; i<=20; i++)
        {
            z = pow(b,i);
            if (z > l) break;
            y.push_back(z);
            
           
        }

        for(ll i=0; i<k.size(); i++)
        {
            bool flag = false;
            for(ll j=0; j<x.size(); j++)
            {
                for(ll r=0; r<y.size(); r++)
                {
                    if(k[i] * x[j] * y[r] == l)
                    {
                        cnt++;
                        flag = true;
                        break;
                    }
                }
                if(flag == true)
                {
                    break;
                }
            }
        }
        cout << cnt << '\n';

    }

    return 0;
}
