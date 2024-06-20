#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string b;
    cin >> b;
    
    // Step 1: Extract distinct characters and sort them
    set<char> distinct_chars(b.begin(), b.end());
    string r(distinct_chars.begin(), distinct_chars.end());
    
    // Step 2: Create the symmetric mapping
    unordered_map<char, char> mapping;
    int len = r.length();
    for (int i = 0; i < len; ++i) {
        mapping[r[i]] = r[len - 1 - i];
    }
    
    // Step 3: Decode the string b
    string s;
    for (char ch : b) {
        s += mapping[ch];
    }
    
    cout << s << endl;
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
