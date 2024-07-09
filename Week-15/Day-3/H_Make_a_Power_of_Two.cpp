#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPowerOfTwo(int n)
{
    if(n==0)
    {
        return false;
    }
    else
    {
        return (ceil(log2(n)) == floor(log2(n)));
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        ll ans = LLONG_MAX;
        string s1;
        if(isPowerOfTwo(n) == true)
        {
            cout << 0 << '\n';
        }
        else
        {
            ll j = 0, k = 0, nn = 1, c=0;
            string s2 = to_string(n);
            for(int i=0; i<=60; i++)
            {
                nn = (ll)pow(2,i);
                s1 = to_string(nn);
                c=0, j=0, k=0;
                bool b;
                while(j != s2.length() && k!= s1.length())
                {
                    if(s2[j] == s1[k])
                    {
                        j++;
                        k++;
                        b = true;
                    }
                    else
                    {
                       j++;
                       c++;
                       b=false;
                    }
                }
                if(b)
                {
                    if(j == s2.length())
                    {
                        k--;
                        c += s1.length()-k-1;
                    }
                    else if(k == s1.length())
                    {
                        j--;
                        c += s2.length() -j-1;
                    }
                }
                else
                {
                    k--;
                    c += s1.length()-k-1;
                }

                if(c==1)
                {
                    ans = 1;
                    break;
                }
                else
                {
                    ans = min(ans, c);
                }
            }
            cout << ans << '\n';
        }

    }

    return 0;
}