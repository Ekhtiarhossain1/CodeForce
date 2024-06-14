#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int hr, min;
    char colon;
    cin>>hr>>colon>>min;

    string time = (hr<12 ? "AM" : "PM");

    hr= (hr%12 ? hr%12 : 12);

    cout<<(hr<10? "0" : "" )<<hr<<colon<<(min<10 ? "0" : "")<<min<<" "<<time<<endl;
}

int main()
{
    int n;
    cin>>n;
    
    while(n--)
    {
        solve();
    }

    return 0;
}
