#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while(q--)
    {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;
        
        long long max_n = min(S / n, a);
        long long remaining_sum = S - (max_n * n);
        
        if (remaining_sum <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
