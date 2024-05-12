#include<bits/stdc++.h>
using namespace std;

int ok(char s,char k)
{
    int cnt = abs(s-k);
    return min(cnt, 10-cnt);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string s,k;
        cin >> s >> k;

        int ans = INT_MAX;
        for(int i=0; i<=n-m; i++)
        {
            int cnt = 0;
            for(int j=0; j<m; j++)
            {
                cnt += ok(s[i+j],k[j]);
            }
            ans = min(ans,cnt);
        }
        cout << ans << '\n';
    }

    return 0;
}
