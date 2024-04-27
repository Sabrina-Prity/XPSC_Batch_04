#include <bits/stdc++.h>
using namespace std;

void S_chack(string a, string b)
{
    if (a.size() > b.size())
    {
        cout << "<" << '\n';
    }
    else if (a.size() < b.size())
    {
        cout << ">" << '\n';
    }
    else
    {
        cout << "=" << '\n';
    }
}
void L_chack(string a, string b)
{
    if (a.size() > b.size())
    {
        cout << ">" << '\n';
    }
    else if (a.size() < b.size())
    {
        cout << "<" << '\n';
    }
    else
    {
        cout << "=" << '\n';
    }
}
void M_chack(string a, string b)
{
    if (a.size() > b.size())
    {
        cout << ">" << '\n';
    }
    else if (a.size() < b.size())
    {
        cout << "<" << '\n';
    }
    else
    {
        cout << "=" << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        char x = a[a.size() - 1];
        char y = b[b.size() - 1];

        if (x == 'S' and y == 'S')
            S_chack(a, b);
        else if (x == 'L' and y == 'L')
            L_chack(a, b);
        else if (x == 'M' and y == 'M')
            M_chack(a, b);
        else if (x == 'S' and y == 'M')
            cout << "<" << '\n';
        else if (x == 'M' and y == 'S')
            cout << ">" << '\n';
        else if (x == 'L' and y == 'M')
            cout << ">" << '\n';
        else if (x == 'M' and y == 'L')
            cout << "<" << '\n';
        else if (x == 'S' and y == 'L')
            cout << "<" << '\n';
        else if (x == 'L' and y == 'S')
            cout << ">" << '\n';
        else
            cout << "=" << '\n';
    }
    return 0;
}
