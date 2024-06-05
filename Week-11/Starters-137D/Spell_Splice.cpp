#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> spell(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> spell[i].first >> spell[i].second;
        }

        int mx_strng = 0;
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                int v1 = spell[i].first, a1 = spell[i].second;
                int v2 = spell[j].first, a2 = spell[j].second;

                int ans = a1 * v2 + v1 * a2;
                if (ans > mx_strng) 
                {
                    mx_strng = ans;
                }
            }
        }

        cout << mx_strng << '\n';
    }

    return 0;
}
