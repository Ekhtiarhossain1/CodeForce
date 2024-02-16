#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int n, r, even = 0, odd = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> r;

            if (r % 2 == 0)
            {
                even += r;
            }
            else
            {
                odd += r;
            }
        }

        if (even < odd)
        {
            cout << "NO" << endl;
        }
        else if (even == odd)
        {
            cout << "NO" << endl;
        }
        else if (even > odd)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}