#include <iostream>
using namespace std;
 
int main()
{
    int test_case;
    cin >> test_case;
 
    while (test_case--)
    {
        int a, b;
        cin>>a>>b;
 
        if(a<b)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<b<<" "<<a<<endl;
        }
    }
 
    return 0;
}