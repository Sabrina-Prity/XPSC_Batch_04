#include <bits/stdc++.h>
using namespace std;

//longest common subsequence
int LCS(const string& a, const string& b) {
    int m = a.size();
    int n = b.size();
    int x[m + 1][n + 1];
    int result = 0; 
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                x[i][j] = 0;
 
            else if (a[i - 1] == b[j - 1])
            {
                x[i][j] = x[i - 1][j - 1] + 1;
                result = max(result, x[i][j]);
            }
            else
                x[i][j] = 0;
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        string a, b;
        cin >> a >> b;
        
        int lcs_len = LCS(a, b);
        int operations = (a.size() - lcs_len) + (b.size() - lcs_len);
        
        cout << operations << '\n';
    }
    
    return 0;
}
