#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
	cin >> x >> y;
	
	int ans = (x*2)+(y*2);
	
	if(ans >= 1000)
	 cout << "YES" << '\n';
	 else
	  cout << "NO" << '\n';

    return 0;
}
