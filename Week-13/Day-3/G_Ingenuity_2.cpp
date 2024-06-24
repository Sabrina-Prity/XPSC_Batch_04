#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = 0, y = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'N')
            {
                y++;
            }
            else if(s[i] == 'S')
            {
                y--;
            }
            else if(s[i] == 'E')
            {
                x++;
            }
            else
            {
                x--;
            }
        }

        if(abs(x) % 2 != 0 || abs(y) % 2 != 0)
        {
            cout << "NO" << '\n';
            continue;
        }

        x /= 2;
        y /= 2;
        ll E = 0, W = 0, N = 0, S = 0;
        if(!x && !y)
        {
            if(n == 2)
            {
                cout << "NO" << '\n';
                continue;
            }
            for(int i = 0; i < n; i++)
            {
                if(s[i] == 'N')
                {
                    N = 1; 
                    S = 1;
                }
            }
            if(!N)
            {
                E = 1;
                W = 1;
            }
        }

        if(y > 0)
        {
            N = y;
        }
        else if(y < 0)
        {
            S = -y;
        }
        if(x > 0)
        {
            E = x;
        }
        else if(x < 0)
        {
            W = -x;
        }

        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'N' && N > 0)
            {
                cout << "R";
                N--;
            }
            else if(s[i] == 'S' && S > 0)
            {
                cout << "R";
                S--;
            }
            else if(s[i] == 'E' && E > 0)
            {
                cout << "R";
                E--;
            }
            else if(s[i] == 'W' && W > 0)
            {
                cout << "R";
                W--;
            }
            else
            {
                cout << "H";
            }
        }
        cout << '\n';
    }

    return 0;
}
