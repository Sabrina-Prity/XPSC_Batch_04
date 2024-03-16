#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,t;
    cin >> a >> b >> t;

    int ans = 0;
    for(int i=1; i<=20; i++)
    {
        int machine = a*i;
        int biscuit = b*i;
        if(machine <= t)
        {
            ans = 0;
            ans += biscuit;
            
        }
        else
        {
            break;
        }
    }
    cout << ans;
    

    return 0;
}