#include<bits/stdc++.h>
using namespace std;

bool isEven(int n)
{
    return ((n^1) == (n+1));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<(isEven(8) ? "Even\n" : "Odd\n");
    cout<<(isEven(17) ? "Even\n" : "Odd\n");
    cout<<(isEven(24) ? "Even\n" : "Odd\n");

    return 0;
}