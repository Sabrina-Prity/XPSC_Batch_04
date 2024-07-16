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
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int mn = *min_element(a.begin(),a.end());
        int mnIdx;
        for(int i=0; i<n; i++)
        {
            if(a[i] == mn)
            {
                mnIdx = i;
                break;
            }
        }
        bool has_inversion = false;
        for(int i=mnIdx+1; i<n; i++)
        {
            if(a[i] < a[i-1])
            {
                has_inversion = true;
                break;
            }
        }

        if(has_inversion)
        {
            mnIdx = -1;
        }
        cout << mnIdx << '\n';
    }

    return 0;
}