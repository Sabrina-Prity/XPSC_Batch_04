#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> neg,pos;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x>0) pos.push_back(x);
            if(x<0) neg.push_back(abs(x));
        }

        ll ans = 0;
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        reverse(pos.begin(),pos.end());
        reverse(neg.begin(),neg.end());

        if(neg.size() == 0)
        {
            if(pos.size() != 0)
            {
                for(int i=0; i<pos.size(); i+=k)
                {
                    ans += pos[i]*2;
                }
                ans -= pos[0];
            }
            cout << ans << '\n';
        }
        else if(pos.size() == 0)
        {
            if(neg.size() != 0)
            {
                for(int i=0; i<neg.size(); i+=k)
                {
                    ans += neg[i]*2;
                }
                ans -= neg[0];
            }
            cout << ans << '\n';
        }
        else
        {
            for(int i=0; i<pos.size(); i+=k)
            {
                ans += pos[i]*2;
            }
            for(int i=0; i<neg.size(); i+=k)
            {
                ans += neg[i]*2;
            }
            if(pos[0] >= neg[0])
            {
                ans -= pos[0];
            }
            else
            {
                ans -= neg[0];
            }
            cout << ans << '\n';
        }
    }

    return 0;
}
