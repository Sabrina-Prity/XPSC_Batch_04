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
        int n,k;
        cin >> n >> k;

        char s;
        int b[n];
        for(int i=0; i<n; i++)
        {
            cin >> s;
            b[i] = s-'0';
        }

        int ans = 0, tmp = 0;
        if(!b[0])
        {
            ans++;
            tmp = 0;
        }
        int i = 1;
        while(i < n)
        {
            if(b[i] == 1)
            {
                if(i-tmp-k <= 0)
                {
                    ans--;
                }
                tmp = i;
            }
            else
            {
                if(i-tmp-k > 0)
                {
                    ans++;
                    tmp = i;
                }
            }
            i++;
        }
        cout << ans << '\n';
    }

    return 0;
}