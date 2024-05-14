#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    map<int,int> cnt;
    for(int i=0; i<n; i++)
    {
        for(int j=2; j*j<=a[i]; j++)
        {
            if(a[i]%j == 0)
            {
                cnt[j]++;
            while(a[i]%j == 0)
            {
                a[i] /= j;
            }
            }
            
        }
        if(a[i] > 1)
        {
            cnt[a[i]]++;
        }
    }
    int ans = 1;
    for(auto [x,y]: cnt)
    {
        ans = max(ans,y);
    }
    cout << ans << '\n';

    return 0;
}
