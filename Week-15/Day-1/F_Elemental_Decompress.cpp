#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        map<int, vector<int>> indx;
        for (int i = 1; i <= n; i++) {
            indx[a[i]].push_back(i);
        }

        bool imp = false;
        for (int i = 1; i <= n; i++) {
            if (indx[a[i]].size() > 2) {
                imp = true;
                break;
            }
        }

        if (imp) {
            cout << "NO" << endl;
            continue;
        }

        vector<int> p(n + 1, -1), q(n + 1, -1);
        multiset<int> remP, remQ;
        for (int i = 1; i <= n; i++) {
            remP.insert(i);
            remQ.insert(i);
        }

        for (int i = 1; i <= n; i++) {
            if (indx[i].empty()) continue;
            if (indx[i].size() == 1) {
                p[indx[i][0]] = i;
                remP.erase(remP.find(i));
            } else if (indx[i].size() == 2) {
                p[indx[i][0]] = i;
                remP.erase(remP.find(i));
                q[indx[i][1]] = i;
                remQ.erase(remQ.find(i));
            }
        }

        for (int i = 1; i <= n; i++) {
            if (p[i] == -1 && q[i] == -1) {
                auto px = remP.end();
                px--;
                p[i] = *px;
                remP.erase(px);
                auto qx = remQ.end();
                qx--;
                q[i] = *qx;
                remQ.erase(qx);
            } else if (p[i] == -1) {
                if (remP.empty()) {
                    imp = true;
                    break;
                }
                auto x = remP.upper_bound(q[i]);
                if (x == remP.begin()) {
                    imp = true;
                    break;
                }
                x--;
                p[i] = *x;
                remP.erase(x);
            } else if (q[i] == -1) {
                if (remQ.empty()) {
                    imp = true;
                    break;
                }
                auto x = remQ.upper_bound(p[i]);
                if (x == remQ.begin()) {
                    imp = true;
                    break;
                }
                x--;
                q[i] = *x;
                remQ.erase(x);
            }
        }

        if (imp) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
        for (int i = 1; i <= n; i++) {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
