#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    cin >> a >> b >> c;

    for(int i=1; i<=1000; i++)
    {
        int ans = c*i;
        if(ans >= a && ans <= b)
        {
            cout << ans;
            return 0;
        }
        
    }
    cout << "-1";

    return 0;
}