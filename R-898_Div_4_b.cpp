#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    int result;

    int digit;
    int all_digits[10];

    for (int i = 0; i < test_case; i++)
    {
        cin >> digit;

        for (int in = 0; in < digit; in++)
        {
            cin >> all_digits[in];
        }

        // Sorting Start
        sort(all_digits, all_digits + digit);
        // for (int j = 0; j < digit - 1; j++)
        // {
        //     for (int k = j + 1; k < digit; k++)
        //     {
        //         if (all_digits[j] > all_digits[k])
        //         {
        //             int h;
        //             h = all_digits[j];
        //             all_digits[j] = all_digits[k];
        //             all_digits[k] = h;
        //         }
        //     }
        // }
        // Sorting Done.

        all_digits[0] += 1;
        result = 1;

        for (int j = 0; j < digit; j++)
        {
            result *= all_digits[j];
        }
        cout<<result<<endl;
    }
    return 0;
}