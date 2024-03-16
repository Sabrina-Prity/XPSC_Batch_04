#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin >> s;
    int cnt = 0;
    for(int val : s)
    {
        cnt++;
    }
    int ans = 4 - cnt;
    while(ans--)
    {
        cout << '0';
    }
    cout << s;

    return 0;
}