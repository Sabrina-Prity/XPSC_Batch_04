#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,n,m;
    cin >> x >> n >> m;

    int ans = x+m;

    if(ans >= n)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}
