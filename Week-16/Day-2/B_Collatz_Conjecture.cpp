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
        int x,y,k;
        cin >> x >> y >> k;

        while(k && x!=1)
        {
            int num = min(k, y-(x%y));
            k -= num;
            x += num;
            while(x%y == 0)
            {
                x /= y;
            }
        }
        if(k == 0)
        {
            cout << x << '\n';
            continue;
        }
        cout << k%(y-1)+1 << '\n';
    }

    return 0;
}