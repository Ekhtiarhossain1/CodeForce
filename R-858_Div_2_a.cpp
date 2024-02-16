#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    long int a, b, c, d;

    while (test_case--)
    {
        long int moves = 0;
        cin >> a >> b >> c >> d;

        if (a == c && b == d)
        {
            cout << 0 << endl;
            continue;
        }
        else if (d - b < 0)
        {
            cout << -1 << endl;
            continue;
        }

        int shift = d - b;

        int tab = c - shift;

        if (tab > a)
        {
            cout << -1 << endl;
            continue;
        }

        while (a > tab)
        {
            moves++;
            a--;
        }
        moves = moves + shift;

        cout << moves << endl;
    }

    return 0;
}