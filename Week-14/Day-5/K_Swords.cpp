#include<bits/stdc++.h>
#define ll long long
using namespace std;


const int maxn = 2e5+10;

ll int gcd(ll int a, ll int b) 
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int maxx = -1;
    int num[maxn];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n);
    
    maxx = num[n - 1];
    
    int now;
    
    for (int i = 0; i < n - 1; i++) 
    {
        if (i == 0)
        {
            now = maxx - num[i];
        }
        else
        {
            now = gcd(now, maxx - num[i]);
        }
    }
    
    ll int ans = 0;
    
    for (int i = 0; i < n - 1; i++) 
    {
        ans += (maxx - num[i]) / now;
    }
    
    cout << ans << " " << now << endl;

    return 0;
}
