#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int r = 4 * 60 - k;
    int i = 0;
    int p = 0;
    while (p <= r && i<=n)
    {
        i++;
        p = p + i * 5;
        
    }
    // cout <<r<<endl;
    // cout<<p<<endl;
    cout<< i-1 << endl;
}