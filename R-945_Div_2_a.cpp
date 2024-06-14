#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b + c) % 2 == 1)
    {
        cout << "-1" << endl;
        return;
    }

    int result = ((a + b + c) - max(0, c - b - a)) / 2;

    cout<<result<<endl;
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
