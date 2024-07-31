#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn = 3e5 + 2;

struct node {
    int lch, rch;
};

node ns[maxn];
int dp[maxn];
bool vis[maxn];
char s[maxn];

int bfs() {
    queue<int> q;
    memset(vis, false, sizeof(vis));
    memset(dp, 0, sizeof(dp));
    int ans = INT_MAX;
    q.push(1);
    vis[1] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        int lch = ns[cur].lch;
        int rch = ns[cur].rch;

        if (lch != 0 && !vis[lch]) {
            if (s[cur] == 'L') {
                dp[lch] = dp[cur];
            }
            if (s[cur] == 'R' || s[cur] == 'U') {
                dp[lch] = dp[cur] + 1;
            }
            q.push(lch);
            vis[lch] = true;
        }

        if (rch != 0 && !vis[rch]) {
            if (s[cur] == 'R') {
                dp[rch] = dp[cur];
            }
            if (s[cur] == 'L' || s[cur] == 'U') {
                dp[rch] = dp[cur] + 1;
            }
            q.push(rch);
            vis[rch] = true;
        }

        if (lch == 0 && rch == 0) {
            ans = min(ans, dp[cur]);
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin >> s + 1;

        for (int i = 1; i <= n; i++) {
            cin >> ns[i].lch >> ns[i].rch;
        }
        int ans = bfs();
        cout << ans << '\n';
    }

    return 0;
}
