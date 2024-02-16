#include<iostream>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;

    char text[8][8];

    while(test_case--)
    {
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>text[i][j];
            }
        }

        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(text[i][j] != '.' )
                {
                   cout<<text[i][j];
                }

            }
        }
        cout<<endl;
    }
    return 0;
}