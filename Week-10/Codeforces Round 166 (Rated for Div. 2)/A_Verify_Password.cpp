#include<bits/stdc++.h>
using namespace std;

bool is_strong_pass(vector<pair<int, int>>& digit, vector<pair<char, int>>& alpha)
{
    for(int i=1; i<digit.size(); i++)
    {
        if(digit[i].first < digit[i-1].first)
        {
            return false;
        }
    }
    for(int i=1; i<alpha.size(); i++)
    {
        if(alpha[i].first < alpha[i-1].first)
        {
            return false;
        }
    }

    if(!digit.empty() && !alpha.empty() && digit.front().second > alpha.back().second)
    {
        return false;
    }
    return true;

}
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string new_s = s;

        sort(new_s.begin(),new_s.end());

        if(s == new_s)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
        

        // vector<pair<int,int>> digit;
        // vector<pair<char,int>> alpha;
        // for(int i=0; i<n; i++)
        // {
        //     if(isdigit(s[i]))
        //     {
        //         digit.push_back({s[i] - '0',i});
        //     }
        //     else if(isalpha(s[i]))
        //     {
        //         alpha.push_back({s[i],i});
        //     }
        // }

        // if(is_strong_pass(digit,alpha))
        // {
        //     cout << "YES" << '\n';
        // }
        // else
        // {
        //     cout << "NO" << '\n';
        // }
    }

    return 0;
}
