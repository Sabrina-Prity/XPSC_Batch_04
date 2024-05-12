#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int l, v1, v2;
        cin >> l >> v1 >> v2;

        int tortoise_time = ceil((double)l / v1);
        int hare_time = ceil((double)l / v2);


        int max_wait_time = abs(hare_time - tortoise_time);
            cout << max_wait_time-1 << endl;
        // if (hare_time <= tortoise_time) {
        //     cout << "-1" << endl;
        // } else {
            
        // }
    }

    return 0;
}
