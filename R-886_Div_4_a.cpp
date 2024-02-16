#include<iostream>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;

    while(test_case--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        if(a+b>=10 || a+c >= 10 || b+c >=10)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}