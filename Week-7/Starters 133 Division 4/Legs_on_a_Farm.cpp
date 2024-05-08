#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int cows = n / 4; 
        int legs_remaining = n % 4; 

        if (legs_remaining > 0 && legs_remaining % 2 == 0) 
        {
            cout << cows + 1 << endl;
        } 
        else 
        {
            cout << cows << endl;
        }
    }

    return 0;
}
