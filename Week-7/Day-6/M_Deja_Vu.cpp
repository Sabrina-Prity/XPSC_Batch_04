#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<ll> b(q);
        for(int i = 0; i < q; i++) {
            cin >> b[i];
        }

        set<ll> st;
        for(int i = 0; i < q; i++) {
            if(st.count(b[i]))
            {
                continue;
            }
            st.insert(b[i]);
            for(int j = 0; j < n; j++) {
                if(a[j] % (1LL << b[i]) == 0) 
                {
                    a[j] += (1LL << (b[i] - 1)); 
                }
            }
        }
        

        for(auto it : a) {
            cout << it << " ";
        }
        cout << '\n';
    }

    return 0;
}
