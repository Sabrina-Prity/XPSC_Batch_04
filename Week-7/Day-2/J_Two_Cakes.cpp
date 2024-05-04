#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    auto ok = [&](int mid)
    {
        int rem_plate = n - (a / mid) - (b / mid);
        return rem_plate <= 0;
    };

    int l = 1;
    int r = min(a, b);
    int ans = 0, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
