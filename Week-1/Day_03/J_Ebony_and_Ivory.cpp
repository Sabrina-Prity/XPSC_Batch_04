#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    cin >> a >> b >> c;

    bool found = false;
    for(int i=0; i<=c; i++)
    {
        for(int j=0; j<=c; j++)
        {
            int ans = a*i + b*j;
            if(ans == c)
            {
                cout << "Yes";
                found = true;
                return 0;
            }
        }
    }
    if(!found)
    {
        cout <<"No";
    }

    return 0;
}