#include<iostream>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;
    int length;

    int array[50];

    for(int i=0; i<test_case; i++)
    {
        int odd=0;

        cin>>length;

        for(int j=0; j<length; j++)
        {
            cin>>array[j];
        }

        for(int p=0; p<length; p++)
        {
            if(array[p]%2!=0)
            {
                odd++;
            }
        }

        if(odd%2 !=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}