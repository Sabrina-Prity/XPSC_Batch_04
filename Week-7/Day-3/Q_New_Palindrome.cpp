#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        map<char,int> mp;
        set<char> st;
        int cnt = 0;

        for(char c: s)
        {
            mp[c]++;
            st.insert(c);
        }

        for(char c: st)
        {
            if(mp[c] >= 2)
            {
                cnt++;
            }
        }

        if(cnt > 1)
        {
            cout << "YES" <<'\n';
        }
        else
        {
            cout << "NO" <<'\n';
        }
    }

    return 0;
}
