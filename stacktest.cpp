#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n-- > 0)
    {
        vector<string> c;
        string s;
        getline(cin, s);
        int i = 0, j = 0;
        while (j <= s.length())
        {
            if (isspace(s[j]))
            {
                c.push_back(s.substr(i, j - i));
                i = j + 1;
                j = j + 1;
            }
            j++;
        }

        if (i != s.length())
        {
            c.push_back(s.substr(i, j - i));
        }
        for (int i = c.size() - 1; i >= 0; i--)
        {
            cout << c[i] << " ";
        }
    }
}