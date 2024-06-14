#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str, r;
    cin >> str;

    r = str;

    int size = str.size();

    for (int i = 0; i < size - 1; i++)
    {
        swap(r[i], r[i + 1]);
    }

    if (str == r)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl
         << r << endl;
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