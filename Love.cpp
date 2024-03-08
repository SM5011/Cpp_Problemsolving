#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s[10] = {"c", "o", "d", "e", "f", "o", "r", "c", "e", "s"};
        string s1[10];
        int c = 0;
        
        for (int i = 0; i < 10; i++)
        {
            cin >> s1[i];
            if (s1[i] != s[i])
            {
                c++;
            }
        }
        
        cout << c << endl;
    }
    return 0;
}
