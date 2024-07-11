#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }
        
        int count_ones = 0;
        int operation = 0;
        
        for (int i = 0; i < k; ++i) {
            if (a[i] == 1) {
                ++count_ones;
            } else {
                while (a[i] > 1) {
                    ++operation;
                    --a[i];
                    ++count_ones;
                }
            }
        }
    
        operation += (count_ones - 1);
        
        cout << operation << '\n';
    }

    return 0;
}
