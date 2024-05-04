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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int score = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            score = min(score, max(abs(a[i] - a[i + 1]), abs(a[i] - a[i - 1])));
        }
        score = min(score, abs(a[1] - a[0]));
                score = min(score, abs(a[n-1] - a[n-2]));
        cout << score << '\n';
    }

    return 0;
}
