#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> store;
        bool flag = false;

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(store.empty())
            {
                cout << 1 ;
                store.push_back(a[i]);
            }
            else
            {
                if(flag)
                {
                   if(a[i] < store.back())
                   {
                    cout << 0 ;
                   } 
                   else
                   {
                    if(a[i] > store[0])
                   {
                    cout << 0 ;
                   }
                   else
                   {
                    cout << 1 ;
                    store.push_back(a[i]);
                   }
                   } 
                }
                else
                {
                    if(a[i] >= store.back())
                    {
                        cout << 1 ;
                        store.push_back(a[i]);
                    }
                    else
                    {
                        if(a[i] > store[0])
                    {
                        cout << 0 ;
                    }
                    else
                    {
                        flag = true;
                        cout << 1 ;
                        store.push_back(a[i]);
                    }
                    }
                }
            }
        }
        cout << '\n';
    }

    return 0;
}
