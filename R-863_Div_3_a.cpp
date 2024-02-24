#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        long long int n, extra_digit, count=0;
        cin>>n>>extra_digit;
        string s;
        cin>>s;

        for (int i = 0; i < n; i++)
        {
            if ( count == 0 && (s[i] - '0') < extra_digit)
            {
                cout << extra_digit;
                count=1;
            }

        cout << s[i];
        
        }

        if(count == 0)
        {
            cout<<extra_digit;
        }

        cout<<endl;
    }

    return 0;
}