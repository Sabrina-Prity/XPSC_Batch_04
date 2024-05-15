#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    
	    if(x > 1000)
	    {
	        while(y--)
	        {
	            x *= 2;
	        }
	    }
	    else
	    {
	        x += 1000;
	        for(int i=0; i<y-1; i++)
	        {
	           x += x; 
	        }
	    }
	    cout << x << '\n';
	}

    return 0;
}
