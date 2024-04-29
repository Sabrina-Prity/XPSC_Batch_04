#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= k; i++) {
           cout << i << " ";
        }
        
        int even = k+2;
        int odd = k+1;

        while(even <= n)
        {
            cout << even << " ";
            even += 2;
        }
        while(odd <= n)
        {
            cout << odd << " ";
            odd += 2;
        }
        cout << '\n';
    }

    return 0;
}
