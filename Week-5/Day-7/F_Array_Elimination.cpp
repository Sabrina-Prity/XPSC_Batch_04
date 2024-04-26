#include <bits/stdc++.h>
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int bit[30];
        memset(bit, 0, sizeof(bit));
        // count set bit for each number
        for (int i = 0; i < 30; i++)
        {
            int num = (1 << i);
            for (int j = 0; j < n; j++)
            {
                if ((a[j] & num) != 0)
                {
                    bit[i]++;
                }
            }
        }
        for (int k = 1; k <= n; k++)
        {
            bool flag = 0;
            for (int i = 0; i < 30; i++)
            {
                if ((bit[i] % k) != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << k << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
