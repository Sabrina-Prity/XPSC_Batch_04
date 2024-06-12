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
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;

        for(int i=0; i<-1; i++)
        {
            if(abs(a[i+1] - a[i]) > 1)
            {
                cout << "YES" << '\n';
                cout << i+1 << " " << i+2 << '\n';
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
