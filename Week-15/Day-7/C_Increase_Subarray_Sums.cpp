#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int ar[n+3];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        vector<int>v;
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1+=ar[i];
            int mx = sum1;
            int sum=sum1;
            int k = 0;
            for(int j=i+1;j<n;j++)
            {
                sum+=ar[j];
                sum-=ar[k];
                k++;
                mx = max(mx,sum);
            }
            v.push_back(mx);
        }

        for(int i=0;i<=n;i++)
        {
            int mx = 0;
            for(int j=0;j<v.size();j++)
            {
                int sum;
                if(i>j+1)
                {
                    sum=v[j]+x*(j+1);
                }
                else{
                    sum=v[j]+x*i;
                }
                mx = max(mx,sum);
            }
            cout<<mx<<endl;
        }
    }

    return 0;
}