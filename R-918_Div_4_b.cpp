#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        for (int i = 0; i < 3; i++)
        {
            string prow;
            cin >> prow;

            sort(prow.begin(), prow.end());

            if (prow[0] == '?')
            {
                if (prow[1] == 'A' && prow[2] == 'B')
                {
                    cout << 'C' << endl;
                }
                else if (prow[1] == 'B' && prow[2] == 'C')
                {
                    cout << 'A' << endl;
                }
                else if (prow[1] == 'A' && prow[2] == 'C')
                {
                    cout << 'B' << endl;
                }

            }
        }
    }

    return 0;
}