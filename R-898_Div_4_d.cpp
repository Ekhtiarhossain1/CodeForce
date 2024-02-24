#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test_case;
  cin>>test_case;
  
  while(test_case--)
  {
     int n, k, operations=0;
     cin>>n>>k;
     
     string a;
     cin>>a;

     for(int i=0; i<n; i++)
     {
        if(a[i]== 'B')
        {
            operations++;
            i = (i+k)-1;
        }
     }

     cout<<operations<<endl;
  }

return 0;
}