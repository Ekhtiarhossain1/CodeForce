#include <bits/stdc++.h>
using namespace std;

int Multiples_of_x(int x, int n)
{
    int sum = 0;

    for (int i = x; i <= n; i = i + x)
    {
        sum += i;
    }
    return sum;
}

void solve()
{

    int n;
    cin >> n;

    vector<int> Maximul_value;

    int maxSum = 0;
    int X_max = 2;

    for (int x = 2; x <= n; x++)
    {
        int currentSum = Multiples_of_x(x, n);

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            X_max = x;
        }
    }

    cout << X_max << endl;
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
