// Dificulty 900

#include <iostream>
using namespace std;

int main()
{
    long long int test_case;
    cin >> test_case;

    while (test_case--)
    {
        long long int n;
        cin >> n;

        if (n & (n - 1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}