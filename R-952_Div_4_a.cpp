#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin>>a>>b;

    char hand = a[0];
    a[0] = b[0];
    b[0] = hand;

    cout<<a<<" "<<b<<endl;
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
