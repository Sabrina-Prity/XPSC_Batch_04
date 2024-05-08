#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s[] = {"b","b","a","a"};

    int j = 0;
    for(int i=0; i<n; i++)
    {
        cout << s[j];
        j++;
        if(j == 4)
        {
            j = 0;
        }
    }
    cout << '\n';

    return 0;
}
