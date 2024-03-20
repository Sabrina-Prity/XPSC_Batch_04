#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> episode(n);
    for(int i=1; i<=n; i++)
    {
        cin >> episode[i];
    }

    vector<bool> watched(n+1,false);
    for(int w: episode)
    {
        watched[w] = true;
    }
    for(int i=1; i<=n; i++)
    {
        if(!watched[i])
        {
            cout << i <<'\n';
            break;
        }
    }

    return 0;
}
