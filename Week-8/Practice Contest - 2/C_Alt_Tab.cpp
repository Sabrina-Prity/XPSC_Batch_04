#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> str(n); 
    set<string> st;
    for (int i = 0; i < n; i++) 
    {
        cin >> str[i];
        st.insert(str[i]);
    }

    reverse(str.begin(), str.end());
   
    for(int i=0; i<n; i++)
    {
        if(st.count(str[i]))
        {
            string last_two;
            if(str[i].size() > 1)
            {
                last_two = str[i].substr(str[i].size()-2);
            }
            else
            {
                last_two = str[i];
            }
            cout << last_two;
            st.erase(str[i]);
        }
    }

    return 0;
}
