#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(a<b && b<c)
    {
        cout<<"STAIR"<<endl;
    }
    else if(a<b && b>c)
    {
        cout<<"PEAK"<<endl;
    }
    else
    {
        cout<<"NONE"<<endl;
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
