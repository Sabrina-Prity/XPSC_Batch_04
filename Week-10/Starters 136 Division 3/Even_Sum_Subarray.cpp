#include<bits/stdc++.h>
using namespace std;

int countEvenSumSubArrays(vector<int>& a) 
{
    int n = a.size();
    int cnt = 0;
    int maxSize = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            if (sum % 2 == 0) {
                int size = j - i + 1;
                maxSize = max(maxSize, size);
            }
        }
    }

    return maxSize;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        cout << countEvenSumSubArrays(a) << '\n';
    }

    return 0;
}
