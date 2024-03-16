#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    int mx;
    int ans = 0;
    int i = 2;

    while (i--)
    {
        if (a > b)
        {
            mx = a;
            ans += a;
            a -= 1;
        }
        else if (a < b)
        {
            mx = b;
            ans += b;
            b -= 1;
        }
        else
        {
            mx = a;
            ans += a;
            a -= 1;
        }
    }
    cout << ans;
    return 0;
}