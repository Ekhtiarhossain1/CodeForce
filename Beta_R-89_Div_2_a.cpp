#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int st_size = s.size();

    for(int i=0; i<st_size; i++)
    {
        if( isupper(s[i]) )
        {
            s[i] = tolower( s[i] );
        }


        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }
        else
        {
            cout<<"."<< s[i];
        }
    }

    return 0;
}