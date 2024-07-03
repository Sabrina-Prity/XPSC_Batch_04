#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        s = ' ' + s;

        int sum = 0;
        map<int, int> q;
        q[0] = 1;
        long long ans = 0;
        for (int i = 1; s[i]; i++) 
        {
            sum += (s[i] == ')' ? -1 : 1);
            ans += q[sum];
            q[sum]++;

            while (!q.empty() && q.begin()->first * 2 < sum) 
            {
                q.erase(q.begin());
            }
        }
        cout << ans << endl;
    }
    return 0;
}