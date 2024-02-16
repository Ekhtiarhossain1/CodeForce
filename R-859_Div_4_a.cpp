#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a - b == c)
        {
            cout << "-" << endl;
        }
        else
        {
            cout << "+" << endl;
        }
    }

    return 0;
}