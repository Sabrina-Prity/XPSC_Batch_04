#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack<char> st;
    ll k = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(st.size() == 0)
        {
            st.push(s[i]);
            continue;
        }
        if(st.top() == s[i])
        {
            k++;
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    if(k%2 == 0)
    {
        cout << "No" << '\n';
    }
    else
    {
        cout << "Yes" << '\n';
    }

    return 0;
}