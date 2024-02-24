#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int a[10][10];

        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            for (int j = 0; j < n; j++)
            {
 
                a[i][j]= s[j]-'0';
            }
        }

        int prev = 0;
        int crr = 0;

        for (int i = 0; i < n; i++)
        {
            crr=0;

            for (int j = 0; j < n; j++)
            {
                crr += a[i][j];
            }

            if (prev != 0)
            {
                if (prev == crr)
                {
                    cout << "SQUARE" << endl;
                    break;
                }
                else if(prev != crr)
                {
                    cout << "TRIANGLE" << endl;
                    break;
                }
            }
            prev = crr;
        }
    }

    return 0;
}