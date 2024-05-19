#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin >> n >> x;

    vector<int> a(n);
    int sum = 0 , cnt = 0, l = 0;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
        while(sum > x)
        {
            sum -= a[l++];
        }
        if(sum == x)
        {
            cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}
