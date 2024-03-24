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
        vector<vector<pair<int, char>>> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x;
        char y;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            for (int k = 0; k < x; k++)
            {
                cin >> y;
                b[j].push_back({x, y});
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
{
    for (int k = 0; k < b[i].size(); k++)
    {
        if (b[i][k].second == 'D')
        {
            if(a[i] != 9) {
                a[i] += 1; // Increment the digit
            }
            else {
                a[i] = 0; // Set to 0 if the digit is 9
            }
        }
        else if(b[i][k].second == 'U')
        {
            if(a[i] != 0) {
                a[i] -= 1; // Decrement the digit
            }
            else {
                a[i] = 9; // Set to 9 if the digit is 0
            }
        }
    }
}

        for(int i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

    }

    return 0;
}
