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
        int n,m;            cin>>n>>m;
        vector<long long int> a(m);
 
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
 
        sort(a.begin(),a.end());
 
        vector<long long int> gaps;
        if(m==1){
            gaps.push_back(n-1);
        }
        else{
            gaps.push_back(((n-a[m-1])+(a[0]-1)));
            for(int i=1;i<m;i++){
                gaps.push_back(((a[i]-a[i-1])-1));
            }
        }
 
        sort(gaps.begin(),gaps.end(),greater<long long int>());
 
        int safe=0;
        int spread=0;
        for(int i=0;i<gaps.size();i++){
            int take=gaps[i]-spread;
            if(take<1){
                break;
            }
            if(take==1){
                safe++;
                spread+=2;
            }
            else if(take>1){
                safe++;
                take-=2;
                spread+=2;
                if(take==1){
                    safe++;
                    spread+=2;
                }
                else if(take>1){
                    safe+=take;
                    spread+=2;
                }
            }
        }
 
 
        int ans=n-safe;
 
        cout<<ans<<endl;
    }

    return 0;
}