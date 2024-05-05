#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int zero = 0, one = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '0')
            {
                if(one)
                {
                    one--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(zero)
                {
                    zero--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << zero+one << '\n';
    }

    return 0;
}
