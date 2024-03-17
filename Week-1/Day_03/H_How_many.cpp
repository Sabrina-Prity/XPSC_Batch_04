#include<bits/stdc++.h>
using namespace std;
int main(){

    int s,t;
    cin >> s >> t;

    int cnt = 0;

    for(int i=0; i<101; i++)
    {
        for(int j=0; j<101; j++)
        {
            for(int k=0; k<101; k++)
            {
                int sum = i+j+k;
                int multiple = i*j*k;
                if(sum <= s && multiple <= t)
                {
                    cnt++;
                }
                
            }
        }
    }
    cout << cnt;

    return 0;
}