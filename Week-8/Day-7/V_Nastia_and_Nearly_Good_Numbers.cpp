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
        ll a,b;
        cin >> a >> b;

        if(b == 1)
        {
            cout <<"NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            ll sum = (a*b*2);
            ll y = sum-a;
            cout << a << " " << y << " " << sum << '\n';
        }
    }

    return 0;
}
