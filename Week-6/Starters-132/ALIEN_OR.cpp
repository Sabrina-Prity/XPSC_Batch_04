#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        vector<string> a(n);
        set<int> s;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            int set_bit = 0, last = 0;
            for(int j=0; j<k; j++)
            {
                if(a[i][j] == '1')
                {
                    set_bit++;
                    last = j;
                }
            }
            if(set_bit == 1)
            {
                s.insert(last);
            }
        }
        if(s.size() == k)
        {
            cout <<"YES" <<'\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
