//Runtime erro ar test case 8
//Difficulty 900

#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    long long int n, f, a, b;
    long long int con;
    while (test_case--)
    {
        cin >> n >> f >> a >> b;

        long long int m[200000];
        m[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> m[i];
        }

        for (int i = 1; i <= n; i++)
        {
            con = (m[i] - m[i - 1]) * a;

            if (con <= b || f >= b)
            {
                f -= min(con, b);
            }
            else
            {
                f = 0;
            }

            if (f <= 0)
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (f > 0)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}