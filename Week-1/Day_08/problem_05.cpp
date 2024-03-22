#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    queue<int> q;
    for (int i = 0; i < k; i++)
    {
        if (a[i] < 0)
            q.push(i);
    }

    for (int i = k; i <= n; i++)
    {
        if(q.empty())
        {
            cout <<"0"<<" ";
        }
        else
        {
            cout << a[q.front()] <<" ";
        }
        //cout << (q.empty() ? 0 : a[q.front()]) << " ";
        while (!q.empty() && q.front() <= i - k)
            q.pop();
        if (i < n && a[i] < 0)
            q.push(i);
    }

    return 0;
}