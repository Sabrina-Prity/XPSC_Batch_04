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
        stack<char> st;
        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;
            if(!st.empty() && st.top() == '(' && x == ')')
            {
                st.pop();
                
            }
            else
            {
                st.push(x);
            }
        }
        cout << st.size()/2 << endl;
    }

    return 0;
}
