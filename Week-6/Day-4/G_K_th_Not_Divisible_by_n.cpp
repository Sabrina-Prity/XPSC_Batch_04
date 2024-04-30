#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        int ans = k / (n-1);

        if((ans+k)%n == 0)
        {
            cout << (ans+k)-1 << '\n';
        }
        else
        {
            cout << ans+k << '\n';
        }
    }

    return 0;
}
