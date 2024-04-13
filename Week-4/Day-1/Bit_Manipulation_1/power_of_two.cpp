#include<bits/stdc++.h>
using namespace std;

bool powOfTwo(int n)
{
    return (n & n-1) == 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<(powOfTwo(8) ? "YES\n" : "NO\n");
    cout<<(powOfTwo(16) ? "YES\n" : "NO\n");
    cout<<(powOfTwo(24) ? "YES\n" : "NO\n");

    return 0;
}