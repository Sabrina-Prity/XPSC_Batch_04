#include <bits/stdc++.h>
using namespace std;

void findSubsequences(int arr[], int n, int b)
{
    bool flag = false;
    int bitwise_AND = -1;
    for (int i = 1; i < (1 << n); i++)
    {
        int bitwise_AND = -1;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                bitwise_AND &= arr[j];
            }
        }
        if (bitwise_AND == b)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int a[n];

        bool flag = false;
        int bitwise_AND = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if((a[i]&b) == b)
            {
                bitwise_AND &= a[i];
            }
        }
        // findSubsequences(a, n, b);
        if(bitwise_AND == b)
        {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    }

    return 0;
}
