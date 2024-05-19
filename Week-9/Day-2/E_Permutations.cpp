#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n==1)
    {
        cout << n ;
        return 0;
    }

    vector<int> ans;
    for(int i=2; i<=n; i+=2)
    {
        ans.push_back(i);
    }
    for(int i=1; i<=n; i+=2)
    {
        ans.push_back(i);
    }
    

    bool flag = true;
    for(int i=0; i<ans.size(); i++)
    {
        int diff = abs(ans[i]- ans[i+1]);
        if(diff == 1)
        {
            flag = false;
        }
    }

    if(flag)
    {
        for(auto x: ans)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << "NO SOLUTION" << '\n';
    }

    return 0;
}
