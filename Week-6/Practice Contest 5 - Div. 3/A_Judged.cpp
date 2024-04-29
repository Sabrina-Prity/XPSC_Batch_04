#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int cnt = 0;
        vector<int> a(5);
        for(int i=0; i<5; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
            {
                cnt++;
            }
        }
        if(cnt >= 4)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }

    }

    return 0;
}
