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
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll one = 0, zero = 0;
        for(char c: s)
        {
            if(c == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        ll mn = min(one,zero);
        if(mn % 2 == 0)
        {
            cout << "Ramos" << '\n';
        }
        else
        {
            cout << "Zlatan" << '\n';
        }
        
    }

    return 0;
}
