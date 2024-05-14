#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int h,x,y;
        cin >> h >> x >> y;

        int ans = h-y;
        int z = ans%x;
        if(z != 0)
        {
            cout << 2+(ans/x) << '\n';
        }
        else
        {
            cout << 1+(ans/x) << '\n';
        }
    }

    return 0;
}
