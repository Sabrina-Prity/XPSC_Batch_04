#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    multiset<char> m;
    for(char c : s)
    {
        m.insert(c);
    }

    multiset<char> to_remove;
    for(char c : m)
    {
        if(k)
        {
            to_remove.insert(c);
            k--;
        }
    }

    string ans = "";
    for(char c : s)
    {
        auto it = to_remove.find(c);
        if(it != to_remove.end())
        {
            to_remove.erase(it);
        }
        else
        {
            ans += c;
        }
    }

    cout << ans;

    return 0;
}
