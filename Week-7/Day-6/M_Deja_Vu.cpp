#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        vector<int>b(q);
        for(int i=0; i<q; i++)
        {
            cin >> b[i];
        }
    
            for(int i=0; i<n; i++)
            {
                for(auto it : b)
                {
                    if(a[i]%(1<<it) == 0)
                    {
                        it -= 1;
                        a[i] += (1<<it);
                    }
                }
              
            }  
            for(auto it : a)
            {
                cout << it << " ";
            }
            cout << '\n';
        
    }

    return 0;
}
