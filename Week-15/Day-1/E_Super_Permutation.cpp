#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
       
        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }
       
        if (n % 2)
        {
            cout << "-1\n";
        }
        else
        {
            int tot = 0;
            int lim = n;
            int i = 0, j = n - 1;
            int c = 0;

            while (i <= j)
            {
                if (c % 2)
                {
                    int cur = 0;
                    if (j < tot)
                    {
                        cur = (n + j) - tot;
                    }
                    else
                    {
                        cur = j - tot;
                    }
                    cout << cur << " ";
                    tot = j;
                    j--;
                }
                else
                {
                    int cur = 0;
                    if (i <= tot)
                    {
                        cur = (n + i) - tot;
                    }
                    else
                    {
                        cur = i - tot;
                    }
                    cout << cur << " ";
                    tot = i;
                    i++;
                }
                c++;
            }
            cout << "\n";
        }
    }

    return 0;
}
