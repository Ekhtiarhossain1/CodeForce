#include <iostream>

using namespace std;

int main()
{
    int test_case;
    long long int size, result;
    cin >> test_case;

    for (int i=0; i < test_case; i++)
    {
        cin >> size;

        result = ((size * (size + 2)) + 2);
        cout << result << endl;
    }

    return 0;
}