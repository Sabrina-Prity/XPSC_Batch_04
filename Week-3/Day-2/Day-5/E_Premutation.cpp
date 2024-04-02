#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> sequences(n, vector<int>(n - 1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> sequences[i][j];
            }
        }

        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[sequences[i][n - 2]]++;
        }

        int maxFreq = 0;
        int maxFreqElement = -1;

        for (const auto &pair : freq) {
            if (pair.second > maxFreq) {
                maxFreq = pair.second;
                maxFreqElement = pair.first;
            }
        }
        // cout << maxFreqElement << endl;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if(sequences[i][n-2] != maxFreqElement)
                {
                    ans.push_back(sequences[i][j]);
                }
            }
        }
        for(int n: ans)
        {
            cout << n <<" ";
        }
        cout << maxFreqElement;
        cout << endl;
    }

    return 0;
}
