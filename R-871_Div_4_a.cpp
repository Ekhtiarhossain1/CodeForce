#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    string codeforce = "codeforces";
    string new_string;

    for (int i = 0; i < test_case; i++)
    {
        cin >> new_string;
        int count = 0;

        for (int j = 0; j < 10; j++)
        {
            if (codeforce[j] != new_string[j])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
