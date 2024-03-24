#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int ans = a+b;
        if(ans == c)
        {
            cout << "+" <<'\n';
        }
        else
        {
            cout << "-" <<'\n';
        }
    }

    return 0;
}
