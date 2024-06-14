#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin>>s;

    for (int i = 0; i < n; i++)
    {
        int n, m;
        m = int(s[i]);
        n = int(s[i-1]);
 
        if (m < n)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        solve();
    }

    return 0;
}