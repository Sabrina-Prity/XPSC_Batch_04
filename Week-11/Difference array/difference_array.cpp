#include<bits/stdc++.h>
using namespace std;
/*
input
5
2 5 1 8 13

output
2 3 -4 7 5 
*/
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    vector<int> diff;
    for(int i=1; i<=n; i++)
    {
        diff.push_back(a[i]-a[i-1]);
    }

    for(auto x : diff)
    {
        cout << x << " ";
    }

    return 0;
}
