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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        vector<char>v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(s[i]);
        }
         for (int i = 0; i < n; i++)
        {
            v.push_back(s[i]);
        }
        int ans = INT_MIN;
        int flag = false;
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == c && flag == false)
            {
                flag = true;
                count = 0;
            }
           if (flag == true)
            {
                count++;
            }
            if(v[i]=='g')
            {
                ans = max(ans,count);
                flag = false;
            }
        }
        cout << ans-1 << '\n';
    }

    return 0;
}
