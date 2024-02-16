#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int best_score = 0, position = 0;
        int a, b, n;

        cin>>n;

        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b;

            if (a <= 10 && b> best_score)
            {
                best_score=b;
                position=i;
            }
            
        }
        cout<<position<<endl;
    }

    return 0;
}