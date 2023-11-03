#include <iostream>
#include <string>
using namespace std;

string func(string alphabet);
string func(string alphabet)
{
    if (alphabet[0] == 'a' || alphabet[1] == 'b' || alphabet[2] == 'c')
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
int main()
{
    int operation;
    cin >> operation;

    string result[1000];

    for (int i = 0; i < operation; i++)
    {
        string abc;
        cin >> abc;
        result[i] = func(abc);
    }

    for (int i = 0; i < operation; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
