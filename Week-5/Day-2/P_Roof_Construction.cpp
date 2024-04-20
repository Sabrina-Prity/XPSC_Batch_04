#include <bits/stdc++.h>
using namespace std;

int MSB(int x)
{
    int msb = __lg(x);
    return msb;
}
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
        if (n == 2)
        {
            cout << '0' << " " << '1'<<'\n';
            continue;
        }

        int x = n - 1;
        while (x > 1)
        {
            cout << x << " ";
            if (MSB(x - 1) != MSB(x))
            {
                break;
            }
            x--;
        }
        for (int i = 0; i <= x - 1; i++)
        {
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}
