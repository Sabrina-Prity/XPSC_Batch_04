#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    pbds<long long> p;
    for (int i = 0; i < k; i++)
    {
        p.insert(a[i]);
    }

    long long old_median = *p.find_by_order((k-1)/2);
    long long sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += abs(a[i] - old_median);
    }
    cout << sum << " ";

    for (int i = k; i < n; i++)
    {
        p.erase(p.find_by_order(p.order_of_key(a[i - k])));
        p.insert(a[i]);
        
        long long new_median = *p.find_by_order((k-1)/2);

        sum += abs(new_median - a[i]) - abs(old_median - a[i - k]);
        if(k % 2 == 0)
        {
            sum -= (new_median - old_median);
        }
        old_median = new_median;
        cout << sum << " ";
    }

    return 0;
}
