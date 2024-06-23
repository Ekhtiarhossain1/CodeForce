#include <bits/stdc++.h>
using namespace std;

long long int smallest(long long int x1, long long int x2, long long int x3)
{
    return fabs(x1 - x1) + fabs(x2 - x1) + fabs(x3 - x1);
}

void solve()
{
    long long int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    long long int hand1 = smallest(x1, x2, x3);
    long long int hand2 = smallest(x2, x1, x3);
    long long int hand3 = smallest(x3, x1, x2);
    long long int hand = min({hand1, hand2, hand3});

    cout << hand << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int test_case;
    cin >> test_case;

    while (test_case--)
    {
        solve();
    }

    return 0;
}
