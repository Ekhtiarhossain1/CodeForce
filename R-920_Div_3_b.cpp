#include <iostream>
#include <string>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int n, one1 = 0, one2 = 0, count = 0, ans = 0;
        string s, f;

        cin >> n;
        cin >> s >> f;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one1++;
            }

            if (f[i] == '1')
            {
                one2++;
            }

            if ((s[i] != f[i]) && f[i] == '1')
            {
                count++;
            }
        }
        ans = count;

        if (one1 > one2)
        {
            ans += (one1 - one2);
        }

        cout << ans << endl;
    }

    return 0;
}