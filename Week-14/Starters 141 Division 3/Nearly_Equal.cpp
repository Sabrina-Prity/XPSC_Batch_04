#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;

        int cnt = INT_MAX;

        for (int i = 0; i <= n - m; i++)
        {
            int temp = 0;
            for (int j = 0; j < m; j++)
            {
                if (s1[i + j] != s2[j])
                {
                    temp++;
                }
            }
            cnt = min(cnt, temp);
        }

        cout << cnt << '\n';
    }

    return 0;
}
