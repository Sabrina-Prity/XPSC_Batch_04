#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> p(n), t(m);
    set<pair<int,int>> s;
    for(int i=0; i<n; i++)
    {
        cin >> p[i];
        s.insert({p[i],i});
    }
    for(int i=0; i<m; i++)
    {
        cin >> t[i];
    }

    for(int i=0; i<m; i++)
    {
        auto it = s.lower_bound({t[i]+1,0});
        if(it == s.begin())
        {
            cout << -1 << '\n';
        }
        else
        {
            it--;
            cout << (*it).first << '\n';
            s.erase(it);
        }
    }




    return 0;
}
