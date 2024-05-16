#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> get_prime(int n) 
{
    vector<bool> is_prime(n + 1, true);

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) 
    {
        if (is_prime[i])
         {
            for (int j = i * i; j <= n; j += i) 
            {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++) 
    {
        if (is_prime[i]) 
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    
    while (t--) 
    {
        int d;
        cin >> d;
          
        vector<int> primes = get_prime(100000);
        
        int p1 = *lower_bound(primes.begin(), primes.end(), d + 1);
        int p2 = *lower_bound(primes.begin(), primes.end(), p1 + d);

        int a = p1 * p2;

        cout << a << '\n';
    }

    return 0;
}
