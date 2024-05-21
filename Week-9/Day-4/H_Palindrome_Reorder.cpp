#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    vector<int> a(26);
    for(int i = 0; i < n.size(); i++) {
        a[n[i] - 'A']++;
    }

    int r = 0;
    for(int i = 0; i < 26; i++) {
        r += (a[i] % 2);
    }
    if(r > 1) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    vector<char> first_half, second_half;
    char middle_char = '\0';

    for(int i = 0; i < 26; i++) {
        if(a[i] % 2 == 0) {
            for(int j = 0; j < a[i] / 2; j++) {
                first_half.push_back(i + 'A');
            }
        } else {
            for(int j = 0; j < a[i] / 2; j++) {
                first_half.push_back(i + 'A');
            }
            middle_char = i + 'A';
        }
    }

    second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    for(auto x : first_half) {
        cout << x;
    }

    if(middle_char != '\0') {
        cout << middle_char;
    }

    for(auto x : second_half) {
        cout << x;
    }

    return 0;
}
