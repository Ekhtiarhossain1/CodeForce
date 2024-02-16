#include<iostream>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;

    while (test_case--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        if(a==b)
        {
            cout<<c<<endl;
        }
        else if(a==c)
        {
            cout<<b<<endl;
        }
        else if(b==c)
        {
            cout<<a<<endl;
        }
    }

    return 0;
}