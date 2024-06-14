#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    int hand, result; 
    hand = INT_MAX;
    
    for(int i=0; i<n-1; i++)
    {
        int result = max(arr[i], arr[i+1]);
        hand = min(hand, result);
    }

    hand--;

    cout<< hand <<endl;
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
