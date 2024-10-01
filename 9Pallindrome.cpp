#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 100;
    string s = to_string(x);
    x = s.length();
    cout << s << endl;
    cout << x << endl;

    for (int i = 0; i < x / 2; i++)
    {
        if (s[i] != s[x - 1 - i]){
            cout << "False";
            return 0;
        }
    }

    cout << "True";

    return 0;
}