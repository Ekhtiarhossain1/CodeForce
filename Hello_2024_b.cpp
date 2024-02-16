#include <iostream>
#include<string>
#include <math.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int n, x = 0;
        string s;

        cin >> n;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
            {
                x += 1;
            }
            else
            {
                x -= 1;
            }
        }

        cout << abs(x) << endl;
    }

    return 0;
}