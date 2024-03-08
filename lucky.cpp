#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    while (n--)
    {
        cin>>s;
        if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}