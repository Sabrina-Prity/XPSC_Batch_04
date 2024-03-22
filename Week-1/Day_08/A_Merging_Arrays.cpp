#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    vector<int> a1(x);
    vector<int> a2(y);

    for(int i = 0; i < x; i++) {
        cin >> a1[i];
    }
    for(int i = 0; i < y; i++) {
        cin >> a2[i];
    }

    for(int i = 0; i < y; i++) {
        a1.push_back(a2[i]);
    }

    sort(a1.begin(), a1.end());

    for(int i = 0; i < x + y; i++) {
        cout << a1[i] << " ";
    }

    return 0;
}
