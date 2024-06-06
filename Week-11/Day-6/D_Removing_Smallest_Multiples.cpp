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
        string s;
        cin >> s;

        long long ans =0;
        string str(n,'1');
        for(int i=0; i<n; i++)
        {
            if(s[i] == '0')
            {
                for(int j=i+1; j<=n; j +=i+1)
                {
                    if(s[j-1] == '1')
                    {
                        break;
                    }
                    if(str[j-1] == '0')
                    {
                        continue;
                    }
                    str[j-1] = '0';
                    ans += i+1;
                }
            }
        }
        cout << ans << '\n';

    }


    return 0;
}
