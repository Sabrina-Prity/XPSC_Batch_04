#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
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

        if(n==2)
        {
            cout << stoi(s) << '\n';
        }
        else if(n == 3)
        {
            int num1 = (s[0]-'0')*10 + (s[1]-'0');
            int ans1 = min(num1*(s[2]-'0'), num1+(s[2]-'0'));

            int num2 = (s[1]-'0')*10 + (s[2]-'0');
            int ans2 = min(num2*(s[0]-'0'), num2+(s[0]-'0'));

            cout << min(ans1, ans2) << '\n';
        }
        else
        {
            int ans = 1e18;
            bool ok = false;
            for(int i =0; i<n-1; i++)
            {
                int num = (s[i]-'0')*10 + (s[i+1]-'0');
                for(int j=0; j<n; j++)
                {
                    if(j==i || j==i+1)
                    {
                        continue;
                    } 
                    if(s[j] == '0')
                    {
                        ok = true;
                    }
                    if(s[j] == '1')
                    {
                        continue;
                    }
                    else
                    {
                        num += s[j]-'0';
                    }
                }
                ans = min(num,ans);
                if(ok == true)
                {
                    ans = 0;
                    break;
                }
            }
            cout << ans << '\n';
        }

    }

    return 0;
}