#include<bits/stdc++.h>
#define ll long long

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int x1,x2,x3;
        cin >> x1 >> x2 >> x3;

        int ans = INT_MAX;
        for(int i=1; i<=10; i++)
        {
            int temp = abs(i - x1) + abs(i - x2) + abs(i - x3);

            if(ans > temp)
            {
                ans = temp;
            }
        }
        cout << ans << '\n';

    }

    return 0;
}