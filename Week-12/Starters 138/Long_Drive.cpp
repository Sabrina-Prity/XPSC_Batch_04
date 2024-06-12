#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;

        int ans = ceil((double)(10 * (y - x)) / (100 - y));

        cout << ans << '\n';
    }

    return 0;
}
