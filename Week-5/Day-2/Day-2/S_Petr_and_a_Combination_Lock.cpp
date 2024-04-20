#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    bool ok = false;
    int N = (1<<n);
    for(int i=0; i<=N-1; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j))
            {
                sum += a[j];
                sum %= 360;
            }
            else
            {
                sum -= a[j];
                sum %= 360;
            }
        }
        if(sum % 360 == 0)
        {
            ok = true;
        }
    }
    if(ok)
      cout <<"YES"<<'\n';
    else
      cout <<"NO"<<'\n';

    return 0;
}
