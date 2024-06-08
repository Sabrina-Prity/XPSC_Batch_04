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

        vector<set<int>> v;
        set<int> s;

        for(int i=0; i<n; i++)
        {
            int k;
            cin >> k;

            set<int> st;
            while(k--)
            {
                int x;
                cin >> x;

                st.insert(x);
                s.insert(x);
            }
            v.push_back(st);
        }

        int ans = 0;
        for(auto it : s)
        {
            set<int> st;

            for(auto i : v)
            {
                if(i.count(it) == 0)
                {
                    for(auto j : i)
                    {
                        st.insert(j);
                    }
                }
            }
            ans = max(ans, (int)st.size());
        }
        cout << ans << '\n';
    }

    return 0;
}
