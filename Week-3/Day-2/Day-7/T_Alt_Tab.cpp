#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string>s(n);
    set<string> remove_duplicate;
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
        remove_duplicate.insert(s[i]);
    }
    for (const string& str : remove_duplicate) {
        cout << str << endl;
    }
    return 0;
}
