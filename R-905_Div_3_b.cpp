#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, n;
    cin >> n >> k;

    string str;
    cin >> str;

    if (n - k == 1)
    {
        cout << "YES" << endl;
        return;
    }

    vector<int> freq(26, 0);

    for (int i = 0; i < n; ++i)
    {
        freq[str[i] - 'a']++;
    }

    int odd_count = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] % 2 == 1)
        {
            odd_count++;
        }
    }

    if (odd_count <= k + 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
