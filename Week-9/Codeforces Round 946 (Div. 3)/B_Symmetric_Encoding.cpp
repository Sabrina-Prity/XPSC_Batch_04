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

        set<char> st;
        for(int i=0; i<n; i++)
        {
            st.insert(s[i]);
        }

        string r(st.begin(), st.end());

        map<char,char> decode;
        int len = r.size();
        for(int i=0; i<len; i++)
        {
            decode[r[i]] = r[len - 1 - i];
        }

        string ans;
        for(char c : s)
        {
            ans += decode[c];
        }

        cout << ans << '\n';

    }

    return 0;
}
