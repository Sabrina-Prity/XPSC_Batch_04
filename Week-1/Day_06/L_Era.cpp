#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ans = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int x = a[i] - (i + 1);
            ans = max(ans, x);
        }
        cout << ans << endl;
    }

    return 0;
}
