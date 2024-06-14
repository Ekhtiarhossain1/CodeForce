#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test_case;
  cin>>test_case;
  
  while(test_case--)
  {
     int n, m, sum1=0, sum2=0;
     cin>>n;
     
     vector<int>a;
     
     for(int i=0; i<n; i++)
     {
        cin>> m;
        a.emplace_back(m);
     }

    //  sort(a.begin(), a.end());

    //  for(int i=0; i < a.size(); i++)
    //  {
    //     cout<<a[i]<<endl;
    //  }

     for(int i=0; i<n; i++)
     {
        if(a[i]<0)
        {
            sum1 += (-1)* (a[i]);
        }
        else{
            sum2 += a[i];
        }
     }

     cout<< sum1+sum2 <<endl;
  }

return 0;
}