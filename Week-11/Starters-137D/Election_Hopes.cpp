#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;

    int ans = 2*y;

    if(x >= ans)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }

    return 0;
}
