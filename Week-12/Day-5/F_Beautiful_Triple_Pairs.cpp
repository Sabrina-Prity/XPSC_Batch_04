#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        long long pairs = 0;
        for(int i = 1; i < n - 1; i++) 
        {
            if(a[i] > a[i - 1] && a[i] > a[i + 1]) 
            {
                int left = i - 1;
                int right = i + 1;

                while(left >= 0 && a[left] == a[i]) left--;
                while(right < n && a[right] == a[i]) right++;

                pairs += (i - left) * (right - i);
            }
        }
        cout << pairs << '\n';
    }

    return 0;
}
