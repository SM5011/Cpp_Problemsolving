#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            int c = 0;
            for (int i = 1; i < b; i++)
            {
                if (b * i <= a)
                {
                    c++;
                }
                else
                {
                    break;
                }
            }

            int r = 0;
            r = (b * (c + 1)) - a;
            cout << r << endl;
        }
    }
}