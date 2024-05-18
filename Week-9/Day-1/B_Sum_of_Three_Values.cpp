#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }
    
    sort(a.begin(), a.end());

    for(int i = 0; i < n - 2; i++) 
    {
        int target = x - a[i].first;
        int l = i + 1;
        int r = n - 1;

        while(l < r)
        {
            int sum = a[l].first + a[r].first;
            if(sum == target) 
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                return 0;
            } 
            else if(sum < target) 
            {
                l++;
            } 
            else 
            {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
