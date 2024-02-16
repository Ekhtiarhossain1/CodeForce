#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test_case;
  cin>>test_case;
  
  while(test_case--)
  {
     int n;
     cin>>n;

     if((n-1)%3==0)
     {
      cout<<"First"<<endl;
     }
     else if((n+1)%3==0)
     {
      cout<<"First"<<endl;
     }
     else
     {
      cout<<"Second"<<endl;
     }
  }

return 0;
}