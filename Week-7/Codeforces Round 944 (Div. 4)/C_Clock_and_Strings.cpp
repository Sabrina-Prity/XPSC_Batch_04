#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fl float
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int cnt = 0;
        if ((c > a && c < b) || (c > b && c < a)){
            cnt++;}
        if ((d > a && d < b ) || (d > b && d < a)){
            cnt++;}
        if (cnt == 0 || cnt == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}