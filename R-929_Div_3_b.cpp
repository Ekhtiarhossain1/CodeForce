#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, a[100000], sum=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }

    if(sum%3 == 0)
    {
        cout<<'0'<<endl;
        return;
    }

    if((sum+1)%3==0){
        cout<<'1'<<endl;
        return;
    }
    
    for(int i=0; i<n; i++)
    {
        if( (sum - a[i])%3==0)
        {
            cout<<'1'<<endl;
            return;
        }
    }
    cout<<'2'<<endl;
}
int main()
{
  int test_case;
  cin>>test_case;
  
  while(test_case--)
  {
    solve();
  }

return 0;
}