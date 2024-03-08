#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + (max - a[i]);
    }
    cout << s << endl;
    return 0;
}
