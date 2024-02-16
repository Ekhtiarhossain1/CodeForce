#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        long long int n;
        cin >> n;

        double total1;

        long long int square, value=0, total2;

        for (int i = 0; i < n; i++)
        {
            cin >> square;

            value += square;
        }

        total1 = sqrt(value);
        total2 = sqrt(value);

        if (total1 == total2)
        {
            cout << "YES" << endl<<endl;
        }
        else
        {
            cout << "NO" << endl<<endl;
        }
    }

    return 0;
}