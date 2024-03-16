#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    vector<char> v;
    for (char c : s)
    {
        v.push_back(c);
    }
    bool found = false;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if(find(v.begin(),v.end(),i) == v.end())
        {
            cout << i;
            found = true;
            break;
        }
    }
    
    if(!found)
    {
       cout <<"None";
    }

    return 0;
}