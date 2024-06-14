#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, f, k, duplicate = 0, fnum, hand;
    cin >> n >> f >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    fnum = arr[f-1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == fnum)
        {
            duplicate++;
        }
    }

    hand = duplicate;

    sort(arr.rbegin(), arr.rend());

    for(int i=0; i<k; i++)
    {
        if(arr[i] == fnum)
        {
            duplicate--;
        }
    }

    if(duplicate==0)
    {
        cout<<"YES"<<endl;
    }
    else if(hand != duplicate)
    {
        cout<<"MAYBE"<<endl;
    }
    else if(hand == duplicate)
    {
        cout<<"NO"<<endl;
    }
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
