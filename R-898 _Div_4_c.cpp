#include<iostream>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;

    int array[10][10];
    int point=0, result= 0;

    
for(int i=0; i<10; i++)
{
    for(int j=0; j<10; j++)
    {
        cin>>array[i][j];
    }
}

for(int i = 0; i<10; i++)
{
    point++;
    for(int j=i; j<10; j++)
    {
        if(array[i][j]=='x')
        {
            result += point;
        }

    }
}


    return 0;
}