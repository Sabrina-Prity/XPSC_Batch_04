int search(string pat, string txt)
{

    vector<int> p(256, 0);
    vector<int> t(256, 0);

    int psize = pat.size();
    int tsize = txt.size();

    for (int i = 0; i < psize; i++)
    {
        p[pat[i]]++;
        t[txt[i]]++;
    }

    int ans = 0;
    if (p == t)
        ans++;

    int i = 0;
    int j = psize;

    while (j < tsize)
    {
        t[txt[j]]++;
        t[txt[i]]--;

        if (p == t)
            ans++;
        i++;
        j++;
    }

    return ans;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    cout << search(s1, s2);

    return 0;
}
