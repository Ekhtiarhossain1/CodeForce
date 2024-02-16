#include <iostream>
#include<string>
using namespace std;

inline void fuction()
{
    int n, x = 0, y = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            x--;
        }
        else if (s[i] == 'R')
        {
            x++;
        }
        else if (s[i] == 'U')
        {
            y++;
        }
        else if (s[i] == 'D')
        {
            y--;
        }

        if (x == 1 && y == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        fuction();
    }

    return 0;
}