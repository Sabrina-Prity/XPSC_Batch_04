#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    ll size = s.size();

    // Perform the operations
    cout << 3 << '\n';
    cout << "L " << size - 1 << '\n';
    cout << "R " << size - 1 << '\n';
    cout << "R " << 2 * size - 1 << '\n';

    return 0;
}
