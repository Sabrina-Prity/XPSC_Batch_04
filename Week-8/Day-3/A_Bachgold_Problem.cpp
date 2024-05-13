#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    if(n%2 ==0)
    {
        int ans = n/2;
        cout << ans <<'\n';
        for(int i=0; i<ans; i++)
        {
            cout << 2 << " ";
        }
        cout << '\n';
    }
    else if(n==3)
    {
        cout << 1 << '\n';
        cout << 3 << '\n';
    }
    else
    {
        n = n-3;
        int ans = n/2;
        cout << ans+1 << '\n';
        for(int i=0; i<ans; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << '\n';
    }

    return 0;
}
