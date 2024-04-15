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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int x = 0;
        // x = (a^b^c);
        for(int i=0; i<n; i++)
        {
            x ^= a[i];
        }
        // (a^x)^(b^x)^(c^x)
        // x^(a^b^c)
        // x^x
        for(int i=0; i<n; i++)
        {
            a[i] ^= x;
        }
        // if we have duplicate value in the array then it will be zero that's why we check again
        int y = 0;
        for(int i=0; i<n; i++)
        {
            y ^= a[i];
        }

        if(y == 0)
        {
            cout << x << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }


    }

    return 0;
}
