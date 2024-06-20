#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m , k, flag=0;
    cin>>n>>m>>k;

    vector<int> value_n(n);
    vector<int> value_m(m);

    for(int i=0; i<n; i++)
    {
        cin>> value_n[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>> value_m[i];
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(value_n[i] + value_m[j] <= k)
            {
                flag++;
            }
        }
    }

    cout<<flag<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        solve();
    }

    return 0;
}
