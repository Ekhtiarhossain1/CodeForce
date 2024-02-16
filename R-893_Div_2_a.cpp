#include<iostream>
using namespace std;

int main()
{
    long int test_case;
    cin>>test_case;

    while (test_case--)
    {
        long int a, b, c;
        cin>>a>>b>>c;

        if((a>b) || ((a==b) && c%2!=0))
        {
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }

    return 0;
}