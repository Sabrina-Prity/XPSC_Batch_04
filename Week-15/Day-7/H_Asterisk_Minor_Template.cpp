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
       string a,b;
       cin>>a;
       cin>>b;
       map < string , int > ma,mb;
       string p,q;
       int na = a.size();
       int nb = b.size();
       if(a==b)
       {
          cout<<"YES"<<endl;
          cout<<a<<endl;
       }
       else {
          if(a[0]==b[0]) {
            cout<<"YES"<<endl;
            cout<<a[0]<<"*"<<endl;
          }
          else if(b[nb-1]==a[na-1]){
            cout<<"YES"<<endl;
            cout<<"*"<<a[na-1]<<endl;
          }
          else {
               string p,q;
               int flg = 0;
               for(int i=0; i<na; i++)
               {
                 for(int j=0; j<nb; j++)
                 {
                      if(a[i]==b[j] and a[i+1]==b[j+1] and i<na-1 and j<nb-1)
                      {
                          p=a[i];
                          q=a[i+1];
                          flg = 1;
                          break;
                      }
                 }
               }
               if(flg) 
               {
                cout<<"YES"<<endl;
                cout<<"*"<<p<<q<<"*"<<endl;
               }
               else 
               cout<<"NO"<<endl;
          }
       }
 
    }

    return 0;
}