#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    int x,y;
    cin >> x >> y;

    int a = n*x;
    int b = m*y;
    int ans = a+b;
    cout << ans << '\n';

    return 0;
}
