#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test_case;
  cin>>test_case;
  
  while(test_case--)
  {
    int aa=0, bb=0;
     string s;
     cin>>s;

     for(int i=0; i<5; i++)
     {
        if('A'== s[i])
        {
            aa++;
        }
        else{
            bb++;
        }
     }
     if(aa>bb)
     {
        cout<<"A"<<endl;
     }
     else{
        cout<<"B"<<endl;
     }
  }

return 0;
}