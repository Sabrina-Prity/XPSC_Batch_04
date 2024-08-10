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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        long long sum = 0, operation = 0;
        bool negSeg = false;

        for(int i=0; i<=n; i++)
        {
            if(i < n)
            {
                sum += abs(a[i]);
            }
            if(negSeg == true)
            {
                if(i==n || a[i]>0)
                {
                    operation++;
                    negSeg = false;
                }
            }
            else
            {
                if(a[i]<0)
                {
                    negSeg = true;
                }
            }
        }
        cout << sum <<" "<< operation << '\n';
    }

    return 0;
}