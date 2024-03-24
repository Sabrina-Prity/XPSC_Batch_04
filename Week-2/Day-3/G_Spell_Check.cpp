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
        string s;
        cin >> s;

        int cnt_T = 0, cnt_i = 0, cnt_m = 0, cnt_u = 0, cnt_r = 0;
        for (char ch : s)
        {
            if (ch == 'T')
                cnt_T++;
            else if (ch == 'i')
                cnt_i++;
            else if (ch == 'm')
                cnt_m++;
            else if (ch == 'u')
                cnt_u++;
            else if (ch == 'r')
                cnt_r++;
        }
        if (n > 5 || n < 5)
        {
            cout << "NO" << '\n';
        }
        else
        {
            bool contains_Timur = (cnt_T == 1 && cnt_i == 1 && cnt_m == 1 && cnt_u == 1 && cnt_r == 1);
            if (contains_Timur)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}
