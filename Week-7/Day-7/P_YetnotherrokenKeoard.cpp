#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        vector<int> capital,small;
        vector<bool> ok(n+2,true);

        for(int i=0; i<n; i++)
        {
            if(s[i] == 'b')
            {
                if(!small.empty())
                {
                    ok[small.back()] = false;
                    small.pop_back();
                }
                ok[i] = false;
            }
            else if(s[i] == 'B')
            {
                if(!capital.empty())
                {
                    ok[capital.back()] = false;
                    capital.pop_back();
                }
                ok[i] = false;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                capital.push_back(i);
            }
            else
            {
                small.push_back(i);
            }
        }

        for(int i=0; i<n; i++)
        {
            if(ok[i])
            {
                cout << s[i];
            }
        }
        cout << '\n';

    }

    return 0;
}
