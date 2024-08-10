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
        int x;
        cin >> x;
        int a = 0, b = 0;

        int bit_pos = __lg(x);
        a = 1 << bit_pos;
        b = a^x;

        cout << b << " " << a <<'\n';
        // ll x;
        // cin >> x;
        // ll n = x, cnt = 0;
        // while(x > 1)
        // {
        //     x = x/2;
        //     cnt++;
        // }

        // ll ans = pow(2,cnt);
        // cout << n-ans <<" "<< ans <<'\n';

    }

    return 0;
}