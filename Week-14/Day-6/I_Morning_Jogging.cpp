#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n);
        vector<vector<int>> ans(n);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
            }
        }
        for(int i = 0; i < n; i++)
        {
            sort(v[i].begin(), v[i].end());
        }
        for(int i = 0; i < m; i++)
        {
            int mn = INT_MAX;
            int idx = -1;
            for(int j = 0; j < n; j++)
            {
                if(!v[j].empty() && v[j][0] < mn)
                {
                    mn = v[j][0];
                    idx = j;
                }
            }
            for(int j = 0; j < n; j++)
            {
                if(j == idx)
                {
                    ans[j].push_back(v[j][0]);
                    v[j].erase(v[j].begin());
                }
                else
                {
                    ans[j].push_back(v[j].back());
                    v[j].pop_back();
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}
