#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int s;
        cin >> s;
        int a[s];
        for (int i = 0; i < s; i++)
        {
            cin >> a[i];
        }

        if (a[0] == a[1])
        {
            for (int i = 2; i < s; i++)
            {

                if (a[0] != a[i])
                {
                    cout << i + 1 << endl;
                }
            }
        }
        else
        {
            if (a[0] != a[2])
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
    }
}