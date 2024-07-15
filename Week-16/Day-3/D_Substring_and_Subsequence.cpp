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
        string a,b;
        cin >> a >> b;

        ll ans = 1e9+10;
        for(int i=0; i<b.size(); i++)
        {
            ll x = 0, y = i;
            while(x<(int)a.size() && y<(int)b.size())
            {
                if(a[x] == b[y])
                {
                    y++;
                }
                x++;
            }
            ans = min(ans, i+(int)b.size() - y);
        }
        cout << (int)a.size() + ans << '\n';
    }

    return 0;
}