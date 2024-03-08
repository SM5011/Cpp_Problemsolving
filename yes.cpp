#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
           s[i]= toupper(s[i]);
        }
        string c = "YES";
        if (c == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}