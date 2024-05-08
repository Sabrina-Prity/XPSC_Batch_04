#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        bool flag  = false;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i] == a[i+1])
            {
                flag = true;
            }
        }

        if(n == 2)
        {
            cout << sum << '\n';
        }
        else if(flag)
        {
            cout << sum << '\n';
        }
        else
        {
            int l = a[0], r = a[n-1];
            int mn = min(l,r);
            int nSum = 0;
            for(int i=0; i<n; i++)
            {
                if(a[i] < mn)
                {
                    nSum += mn;
                    // cout << a[i] << " " << mn;
                }
                else
                {
                    nSum += a[i];
                }
            }
            cout << nSum << '\n';
        }
    }

    return 0;
}
