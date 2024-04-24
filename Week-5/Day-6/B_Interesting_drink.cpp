#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;

        int ans = upper_bound(a.begin(),a.end(),x) - a.begin();
        cout << ans << '\n';
       
    }

    return 0;
}
