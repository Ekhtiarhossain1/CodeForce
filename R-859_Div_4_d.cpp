#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> array(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> array[i];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            --l;
            --r;

            long long result = 0;
            for (int i = 0; i < n; ++i)
            {
                if (i >= l && i <= r)
                {
                    result += k;
                }
                else
                {
                    result += array[i];
                }
            }

            if (result % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
