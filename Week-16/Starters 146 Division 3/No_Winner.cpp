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
        int a,b,c,m;
        cin >> a >> b >> c >> m;

        if(abs(a-b)<=m || abs(b-c)<=m || abs(c-a)<=m) cout << "YES" << '\n';
        else cout << "NO" << '\n';

    }

    return 0;
}