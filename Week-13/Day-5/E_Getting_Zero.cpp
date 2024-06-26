#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
	cin >> n;
	vector<int>v(n), p(16);
	p[0] = 1;
	for (int i = 1; i <= 15; i++)
	{
		p[i] = p[i - 1] * 2;
	}
	for (int i = 0; i < n; i++)cin >> v[i];
	for (int i = 0; i < n; i++)
	{
		if (v[i] == 0)
		{
			cout << 0 << " ";
			continue;
		}
		int res = 15;
		for (int j = 0; j <= 15; j++)
		{
			int ans = v[i] + j;
			for (int k = 0; k <= 15 - j; k++)
			{
				if (ans * p[k] % 32768 == 0)
				{
					res = min(res, j + k);
					break;
				}
			}
		}
		cout << res << " ";
	}

    return 0;
}