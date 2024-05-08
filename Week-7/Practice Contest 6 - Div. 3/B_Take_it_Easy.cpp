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
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n != 0)
        {
            cout << "No" << '\n';
            continue;
        }

        int x = sum / n;
        bool flag= true;

        for (int i = 0; i < n; i++)
        {
            if ((a[i] -x) %2 != 0 )
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }

    return 0;
}
