#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for(int i=31; i>=0; i--)
        {
            if((1 << i) & n)
            {
             cout << ((1<<i)-1) << '\n';
             break;
            }
        }
        
    }

    return 0;
}
