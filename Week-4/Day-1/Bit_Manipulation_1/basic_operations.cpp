#include <bits/stdc++.h>
using namespace std;

int check_Kth_bit_on_or_off(int x, int k)
{
    return (x >> k) & 1;
}

void print_on_and_off_bits(int x)
{
    for (int k = 0; k <= 31; k++)
    {
        if (check_Kth_bit_on_or_off(x, k))
        {
            // if OFF print 1
            cout << 1 << " ";
        }
        else
        {
            // if OFF print 0
            cout << 0 << " ";
        }
    }
    cout << '\n';
}

void count_on_and_off_bits(int x)
{
    int ON = 0;
    int OFF = 0;
    for (int k = 0; k <= 31; k++)
    {
        if (check_Kth_bit_on_or_off(x, k))
        {
            // if ON print 1
            ON++;
        }
        else
        {
            // if OFF print 0
            OFF++;
        }
    }
    cout << "ON bit -> " << ON << '\n';
    cout << "OFF bit -> " << OFF << '\n';
}

int turn_on_Kth_bit(int x, int k)
{
    return (x | (1 << k));
}

int turn_off_Kth_bit(int x, int k)
{
    return x & (~(1 << k));
}

int toggle_Kth_bit(int x, int k)
{
    return (x ^ (1 << k));
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // cout << check_Kth_bit_on_or_off(44,3) <<'\n';
    // cout << check_Kth_bit_on_or_off(44,4) <<'\n';

    // print_on_and_off_bits(44);
    // count_on_and_off_bits(44);

    // cout << turn_on_Kth_bit(44,4);
    // cout << turn_off_Kth_bit(44, 3);

    // cout << toggle_Kth_bit(44,3);
    cout << toggle_Kth_bit(44,4);

    return 0;
}
