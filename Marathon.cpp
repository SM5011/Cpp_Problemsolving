#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (a < b && a < c && a < d)
        {
            cout << "3" << endl;
        }
        else if ((a < b && a < c) || (a < c && a < d) || (a < b && a < d))
        {
            cout << "2" << endl;
        }
        else if (a < b || a < c || a < d)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}