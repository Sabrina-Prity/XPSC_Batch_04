#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (v[i] != v[n - 1 - i])
        {
            return false;
        }
    }
    return true;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isPalindrome(a))
        {
            cout << "YES" << endl;
            continue;
        }

        int i = 0, j = n - 1;
        bool palindrome = true;
        while (i < j)
        {
            if (a[i] != a[j])
            {
                vector<int> v1 = a, v2 = a;
                v1.erase(v1.begin() + i);
                v2.erase(v2.begin() + j);
                palindrome = isPalindrome(v1) || isPalindrome(v2);
                break;
            }
            i++;
            j--;
        }

        if (palindrome)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
