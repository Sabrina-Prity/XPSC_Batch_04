#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
        }

        else
        {
            if (a < b)
            {
                 swap(a, b);
            }
            int bit = -1;
            for (int i = 31; i >= 0; i--)
            {
                int x = (1 << i);
                if ((a & x) != (b & x))
                {
                    bit = i;
                    break;
                }
            }

            int ans = 0;
            for (int i = bit - 1; i >= 0; i--)
            {
                int x = (1 << i);
                if ((a & x) && ((a | b) ^ x))
                {
                    ans += x;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}
