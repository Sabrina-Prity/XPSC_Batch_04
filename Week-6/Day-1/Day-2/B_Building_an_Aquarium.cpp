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
        int n,w;
        cin >> n >> w;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());

        ll l = 1, r = 1e10;
        while(l < r-1)
        {
            ll mid = l + (r-l) / 2;
            ll water = 0;
            for(int i=0; i<n; i++)
            {
                if(a[i] < mid)
                {
                    water += mid - a[i];
                }
            }
            if(water > w)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << l << '\n';

    }

    return 0;
}
