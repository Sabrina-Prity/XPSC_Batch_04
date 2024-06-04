#include<bits/stdc++.h>
#define N 200005
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,q;
    cin >> n >> k >> q;

    vector<int> d(N);
    for(int i=1; i<=n; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }
    int cnt = 0;
    for(int i=1; i<=d.size(); i++)
    {
        cnt += d[i];
        if(cnt >= k)
        {
            d[i] = 1;
        }
        else
        {
            d[i] = 0;
        }
    }

    vector<int> p(N);

    for(int i=1; i<=p.size(); i++)
    {
        p[i] = d[i-1] + p[i-1];    
    }

    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << p[r+1]-p[l] << '\n';
    }
    

    return 0;
}