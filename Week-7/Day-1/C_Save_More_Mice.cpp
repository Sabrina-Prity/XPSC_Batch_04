#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(),greater<int>());

        ll time = 0, save = 0;
        for(int i=0; i<k; i++)
        {
            if(time < a[i])
            {
                time += n-a[i];
                save++;
            }
            else
            {
                break;
            }
        }
        cout << save << '\n';
    }

    return 0;
}
