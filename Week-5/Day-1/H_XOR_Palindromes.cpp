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

        string ans = "";
        int pair = 0;
        int must_cng = 0;

        //find pair
        int l=0, r=n-1;
        while(l<r)
        {
            if(s[l] == s[r])
            {
                pair += 2;
            }
            else
            {
                must_cng++;
            }
            l++,r--;
        }

        for(int i=0; i<=n; i++)
        {
            int total_1 = i;
            total_1 -= must_cng;
            if(total_1 < 0)
            {
                ans.push_back('0');
                continue;
            }
            total_1 = max((total_1%2), total_1-pair);
            total_1 = max(0, total_1-(n%2));

            if(total_1 == 0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
