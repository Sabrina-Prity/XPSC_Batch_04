#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;

        if(x == 100) {
            cout << 0 << '\n';
        }
        else {
            vector<int> v;
            for(int i = 1; i <= 10; i++) {
                int dri = 10 * i;
                v.push_back(dri);
            }

            int res = 100 - x;

            int l = 0, r = 9, mid, ans = -1; // Correcting the range of binary search
            while(l <= r) {
                mid = (l + r) / 2;
                if(v[mid] <= res) {
                    ans = mid;
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }
            cout << v[ans] << '\n';
        }
    }
    return 0;
}
