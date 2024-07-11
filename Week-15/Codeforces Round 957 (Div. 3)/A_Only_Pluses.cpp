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
        int a, b, c;
        cin >> a >> b >> c;

        int i = 5;
        while(i)
        {
            if(a <= b && a <= c) a++;
            else if(b <= a && b <= c) b++;
            else c++;
            i--;
        }

        int ans = a * b * c;
        cout << ans << '\n';
    }

    return 0;
}
