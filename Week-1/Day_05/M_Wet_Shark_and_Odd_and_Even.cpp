#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum << '\n';
    }
    else
    {
        long long smallest_odd = INT_MAX; 
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                smallest_odd = min(smallest_odd,a[i]); 
            }
        }
        cout << sum - smallest_odd << '\n';
    }

    return 0;
}
