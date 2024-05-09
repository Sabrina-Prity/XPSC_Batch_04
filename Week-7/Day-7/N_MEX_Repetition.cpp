#include<bits/stdc++.h>
using namespace std;

int find(vector<int> a)
{
    vector<int> b(a.size()+1, 0);
    for(auto x: a)
    {
        b[x]++;
    }
    for(int i=0; i<b.size(); i++)
    {
        if(b[i] == 0) return i;
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int mex = find(a);
        a.push_back(mex);

        int reminder = k%(n+1);
        int x = (n+1 - reminder)%(n+1);
        vector<int> ans;
        
        for(int i=x; i<n+1; i++)
        {
            ans.push_back(a[i]);
        }
        for(int i=0; i<x-1; i++)
        {
            ans.push_back(a[i]);
        }
        if(ans.size() > n) 
        {
            ans.pop_back();
        }

        for(auto y: ans)
        {
            cout << y <<" ";
        }
        cout << '\n';
    }

    return 0;
}
