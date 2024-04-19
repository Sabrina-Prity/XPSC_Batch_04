#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        ll temp = x;
        vector<int> v;
        while(temp != 0)
        {
            if(temp % 2 == 0)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(1);
            }
            temp = temp >> 1;
        }
        ll c1 = 0, j = 0;
        for(int i=v.size()-1; i>=0; i--)
        {
            if(v[i] == 1)
            {
                j++;
            }
            else
            {
                if(j >= 2)
                {
                    c1++;
                }
            }
        }
        cout << (1<<c1) << '\n';

    }

    return 0;
}
