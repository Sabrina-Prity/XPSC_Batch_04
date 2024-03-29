#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin >> n >> s;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll l=0, r = 0, sum = 0, cnt = 0;
    while(r < n) {
        sum += a[r];
        while(sum >= s) {
            cnt += n - r;
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << cnt << '\n';

    return 0;
}
