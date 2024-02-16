#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        long int a, b, c, d, e, f, g, h;
        long int A;
        cin >> a >> b >> c >> d >> e >> f >> g >> h;

        if (a == c)
        {
            A = (sqrt(((a - c) * (a - c)) + ((b - d) * (b - d))));
        }
        else if (a == e)
        {
            A = (sqrt(((a - e) * (a - e)) + ((b - f) * (b - f))));
        }
        else if (a == g)
        {
            A = (sqrt(((a - g) * (a - g)) + ((b - h) * (b - h))));
        }
        cout << A * A << endl;
    }

    return 0;
}