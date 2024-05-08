#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        long long ans = 0;

        for (int i = 1; i <= n; i++) {
            long long left = arr[i];
            if (left == 1) {
                ans += n;
            } else {
                long long power = 1;
                for (int j = 1; j <= n; j++) {
                    power *= left;
                    if (power > 1000000000LL) {
                        break;
                    } else {
                        long long right = arr[j];
                        if (power <= right) {
                            ans++;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
