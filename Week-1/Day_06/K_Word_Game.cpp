#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[3][n];
        map<string,int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                mp[s[i][j]]++;
            }
        }
       
        for(int i=0; i<3; i++)
        { 
            int count = 0;
            for(int j=0; j<n; j++)
            {
                if(mp[s[i][j]] == 1)
                {
                    count += 3;
                }
                else if(mp[s[i][j]] == 2)
                {
                    count ++;
                }
            }
            cout << count <<" ";
        }
        cout <<'\n';
    }

    return 0;
}
