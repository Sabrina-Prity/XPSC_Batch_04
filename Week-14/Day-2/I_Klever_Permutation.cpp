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
        int n, k;
        cin >> n >> k;

        ll mx = n, mn = 1LL;
        vector<ll> p(n);

    for (int i = 1; i <= k; i++) 
    {
        for (int j = i; j <= n; j += k) 
        {
            if (i % 2 == 1) 
            {
                p[j - 1] = mn++;
            } else 
            {
                p[j - 1] = mx--;
            }
        }
    }

    for (long long i : p) {
        cout << i << " ";
    }
    cout << endl;
}
    return 0;
}