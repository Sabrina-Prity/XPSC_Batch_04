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
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());

        int i,j;
        int mn = INT_MAX;
        for(int k = 0; k<n-1; k++)
        {
            if(a[k+1] - a[k] < mn)
            {
                mn = a[k+1] - a[k];
                i = k;
                j = k+1;
            }
        }
        if(n == 2)
        {
            cout << a[0] << " " << a[1] << '\n';
        }
        else
        {
            for(int k=j; k<n; k++)
            {
                cout << a[k] << " ";
            }
            for(int k=0; k<=i; k++)
            {
                cout << a[k] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}