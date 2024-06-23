#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> screen;

    while(true)
    {
        if(n<=0 && m <=0 )
        {
            break;
        }

        if(m >= 2)
        {
            screen.push_back(1);
            m -= 2;
            n -= 7;
        }
        else if( m  == 1)
        {
            screen.push_back(1);
            m -= 1;
            n -= 11;
        }
        else if(m==0 && n>=0)
        {
            screen.push_back(1);
            n -= 15;
        }
    }
    cout<<screen.size()<<endl;
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
