/*
Time Limited Excceded in Test 3.
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;

    vector<long long int> arr(n);
    long long int total_sum = 0;

    vector<long long int> sum(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (i != 0)
        {
            sum[i] = sum[i - 1] + arr[i];
        }
        else
        {
            sum[i] = arr[i];
        }
    }

    int good_prefixes = 0;

    for (int i = 0; i < n; ++i)
    {

        if ( i == 0 && arr[i] == 0)
        {
            good_prefixes++;
            continue;
        }

        for (int j = i; j >= 0; j--)
        {
            if (sum[i] - arr[j] == arr[j])
            {
                ++good_prefixes;
                break;
            }
        }
    }

    cout << good_prefixes << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long int test_case;
    cin >> test_case;

    while (test_case--)
    {
        solve();
    }

    return 0;
}
