#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin >> n >> m >> k;

    vector<int> a(m+1);
    for(int i=0; i<=m; i++)
    {
        cin >> a[i];
    }

    vector<vector<int>> all_bitMask;
    for(int bit=0; bit<=m; bit++)
    {
        vector<int> v;
        for(int k=0; k<n; k++)
        {
            if((a[bit] >> k)& 1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        all_bitMask.push_back(v);
    }

    int ans = 0;
    vector<int> fedor_bitMask = all_bitMask[m];
    for(int i=0; i<all_bitMask.size()-1; i++)
    {
        vector<int> v = all_bitMask[i];
        int cnt = 0;
        for(int k=0; k<n; k++)
        {
            if(fedor_bitMask[k] != v[k])
            {
                cnt++;
            }
        }
        if(cnt <= k)
        {
            ans++;
        }
    }
    cout << ans << '\n';

    return 0;
}
