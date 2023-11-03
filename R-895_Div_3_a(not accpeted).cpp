#include <iostream>
using namespace std;

int moves_to_equal(float x, float y, float z)
{
    int move;
    if (x == y)
    {
         move=0;
    }
    else if (x > y)
    {
        float h;
        h = (x - y) / 2;

        int h2;
        h2 = h / z;

        float h3;
        h3 = h / z;

        if(h3 > h2)
        {
            move = h2+1;
        }
        else{
            move=h2;
        }
    }
    else if(x<y)
    {
         float h;
        h = (y - x) / 2;

        int h2;
        h2 = h / z;

        float h3;
        h3 = h / z;

        if(h3 > h2)
        {
            move = h2+1;
        }
        else{
            move=h2;
        }
    }
    return move;
}
int main()
{
    int test_case;
    cin >> test_case;

    int t= test_case - 1;

    int result[t];

    for (int i = 0; i < test_case; i++)
    {
        float a, b, c;
        cin >> a >> b >> c;

        result[i] = moves_to_equal(a, b, c);
    }

    for(int i=0; i<test_case; i++)
    {
        cout<<result[i]<<endl;
    }

    return 0;
}
