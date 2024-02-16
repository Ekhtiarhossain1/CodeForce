#include<iostream>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;

    while (test_case--)
    {
        int a, b;
        cin>>a>>b;

        if((a+b)%2==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
    }
    
    return 0;
}