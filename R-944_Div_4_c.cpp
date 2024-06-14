#include <iostream>
using namespace std;
 
int main()
{
    int test_case;
    cin >> test_case;
 
    while (test_case--)
    {
        int a, b, c, d, tc=0, td=0;
        cin>>a>>b>>c>>d;
 
            if(a<b)
            {
                for(int i=a; i<b; i++)
                {
                if(c==i)
                {
                    tc++;
                }
 
                if(d==i)
                {
                    td++;
                }
                }
            }
            else
            {
                for(int i=b; i<a; i++)
            {
                if(c==i)
                {
                    tc++;
                }
 
                if(d==i)
                {
                    td++;
                }
            }
            }
        if(tc==1 && td==1)
        {
            cout<<"NO"<<endl;
        }
        else if(tc!=0 && td==0 || tc==0 && td !=0)
        {
            cout<<"YES"<<endl;
 
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    }
 
    return 0;
}