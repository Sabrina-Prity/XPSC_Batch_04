#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cntA = 0, cntB = 0, cntC = 0;
        int moves = 0;

        for (char ch : s) {
            if (ch == 'a') {
                cntA++;
            } else if (ch == 'b') {
                if (cntA > cntC) {
                    cntB++;
                }
            } else if (ch == 'c') {
                if (cntA > 0 && cntB > 0) {
                    moves++;
                    cntA--;
                    cntB--;
                }
            }
        }
        cout << moves << '\n';
    }

    return 0;
}
