#include <iostream>
using namespace std;
int main()
{
    int n;
    int y = 0, yn = 0, c = 0;
    cin >> n;
    if (n == 7 || n==4 )
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        while (n)
        {
            if (n % 10 == 4 || n % 10 == 7)
            {
                y++;
            }
            else
            {
                yn++;
            }
            n = n / 10;
            c++;
        }
        if (y == c)
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