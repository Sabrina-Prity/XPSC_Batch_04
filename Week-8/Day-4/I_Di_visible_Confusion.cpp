#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            bool flag = false;
            for(int j=2; j<=i+1; j++)
            {
                if(a[i]%j != 0)
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                ans = 1;
                break;
            }
            
        }
        if(ans == 1)
            {
                cout << "NO" << '\n';
            }
            else
            {
                cout << "YES" << '\n';
            }
    }

    return 0;
}
