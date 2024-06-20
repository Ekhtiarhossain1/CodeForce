#include <bits/stdc++.h>
using namespace std;

bool vowel(char s)
{
    return (s == 'a' || s == 'e');
}

bool consonant(char s)
{
    return (s == 'b' || s == 'c' || s == 'd');
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<string> hand;

    for (int i = 0; i < n;)
    {
        if (i + 3 < n && consonant(s[i]) && vowel(s[i + 1]))
        {
            if (consonant(s[i + 2]) && consonant(s[i + 3]))
            {
                // CVC pattern
                hand.push_back(s.substr(i, 3));
                hand.push_back(".");
                i += 3;
            }
            else if (consonant(s[i + 2]) && vowel(s[i + 3]))
            {
                // CV pattern
                hand.push_back(s.substr(i, 2));
                hand.push_back(".");
                i += 2;
            }
        }
        else if (i + 2 < n && consonant(s[i]) && vowel(s[i + 1]) )
        {
            if(consonant(s[i + 2]))
            {
                hand.push_back(s.substr(i, 3));
                hand.push_back(".");
                i += 3;
            }
        }
        else if(i+1 < n && consonant(s[i]) && vowel(s[i+1]))
        {
            hand.push_back(s.substr(i, 2));
            hand.push_back(".");
            i += 1;
        }
        else
        {
            i++;
        }
    }

    // Remove the last dot if it exists
    if (!hand.empty() && hand.back() == ".")
    {
        hand.pop_back();
    }

    for (const auto& it : hand)
    {
        cout << it;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        solve();
    }

    return 0;
}
