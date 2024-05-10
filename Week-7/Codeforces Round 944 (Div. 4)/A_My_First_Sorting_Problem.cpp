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
        cin >> x >>y;
        if(x < y)
        {
            cout << x << " " << y <<'\n';
        }
        else
        {
            cout << y << " " << x <<'\n';
        }
    }

    return 0;
}
