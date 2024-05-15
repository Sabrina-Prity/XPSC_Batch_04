#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x,y;
    cin >> x >> y;

    if(x == y)
    {
        cout << "=";
        return 0;
    }

    ll a = y * log(x);
    ll b = x * log(y);

    if(a == b)
    {
        cout << "=";
    }
    else if(a > b)
    {
        cout << ">";
    }
    else
    {
        cout << "<";
    }

    return 0;
}
