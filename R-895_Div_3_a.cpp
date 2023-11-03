#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    int count[1000];

    for (int i = 0; i < test_case; i++)
    {
        int vessel1, vessel2, cup;
        cin >> vessel1 >> vessel2 >> cup;

        double A = max(vessel1, vessel2);
        double B = min(vessel1, vessel2);

        count[i] = 0;

        while (A - B >= cup)
        {
            if (A - B >= cup)
            {
                count[i] = count[i] + 1;

                A = A - cup;
                B = B + cup;
            }
            else if (A - B > 0)
            {
                count[i] = count[i] + 1;
            }
        }
        if (A - B > 0)
        {
            count[i] = count[i] + 1;
        }
    }
    for (int i = 0; i < test_case; i++)
    {
        cout << count[i] << endl;
    }

    return 0;
}
