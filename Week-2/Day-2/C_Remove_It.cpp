#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, z;
    cin >> n >> z;
    vector<int> myList;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != z)
        {
            myList.push_back(x);
        }
    }
    if (!myList.empty())
    {
        for (int v : myList)
        {
            cout << v << " ";
        }
    }
    cout << " ";

    return 0;
}
