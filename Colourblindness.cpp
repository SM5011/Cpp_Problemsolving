#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int cp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (s[i] != a[i])
            {
                cp++;
            }
        }
        if (cp == 0)
        {
            cout << "YES" << endl;
           
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] == 'G')
            {
                s[i] = 'B';
            }
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == a[i])
            {
                c++;
            }
        }
        if (c != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}