#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string A;
        cin >> A;
        
        char last_move = ' ';
        int max_wins = 0;

        for (int i = 0; i < n; i++) 
        {
            if (A[i] == 'R') 
            {
                if (last_move != 'P') 
                {
                    last_move = 'P';
                    max_wins++;
                } 
                else
                {
                    last_move = ' ';
                }
            } 
            else if (A[i] == 'P') 
            {
                if (last_move != 'S') 
                {
                    last_move = 'S';
                    max_wins++;
                } 
                else {
                    last_move = ' ';
                }
            } 
            else if (A[i] == 'S') 
            {
                if (last_move != 'R') 
                {
                    last_move = 'R';
                    max_wins++;
                }
                else 
                {
                    last_move = ' ';
                }
            }
        }

        cout << max_wins << endl;
        
    }

    return 0;
}
