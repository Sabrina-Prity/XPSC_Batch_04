#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 205;
int a[MAX_N][MAX_N];
vector<pair<int,int>> d = {{-1,1},{1,1},{-1,-1},{1,-1}};
int n,m;

bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

int max_Sum(int i, int j) {
    int sum = a[i][j];
    for(int k = 0; k < 4; k++) {
        int ci = i + d[k].first;
        int cj = j + d[k].second;
        while(valid(ci, cj))
        {
            sum += a[ci][cj];
            ci += d[k].first;
            cj += d[k].second;
        }
            
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int maxSum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(valid(i, j)) {
                    int ans = max_Sum(i, j);
                    maxSum = max(maxSum, ans); 
                }
            }
        }
        cout << maxSum << endl; 
    }

    return 0;
}
