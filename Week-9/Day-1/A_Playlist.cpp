#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    set<int> st;
    int start = 0, maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        while(st.count(a[i]))
        {
            st.erase(a[start]);
            start++;
        }
        st.insert(a[i]);
        maxLen = max(maxLen, i - start + 1);
    }

    cout << maxLen << '\n';

    return 0;
}
