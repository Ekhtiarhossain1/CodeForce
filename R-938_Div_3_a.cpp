#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b, result;
    cin >> n >> a >> b;

    if (b >= a * 2)
    {
        result = n * a;
    }
    else if (a * 2 > b)
    {
        if (n % 2 != 0)
        {
            result = (((n - 1)/2) * b) + a;
        }
        else
        {
            result = (n/2)*b;
        }
    }

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
