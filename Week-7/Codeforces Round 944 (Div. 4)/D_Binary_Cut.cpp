#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<char>a;
        for(char c:s)
        {
            a.push_back(c);
        }
        vector<char>b;
        b=a;
        sort(b.begin(),b.end());
        if(b==a) cout<<1<<'\n';
        else
        {
            int ans=0;
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                ans++;
            }
        }
        if(ans==0) cout<<1<<'\n';
        else if(ans==1) cout<<2<<'\n';
        else cout<<ans<<'\n';
        }
        
    }
    return 0;
}