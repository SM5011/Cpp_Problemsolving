#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int tr = 0, tc = 0;
    
    // Reading values into the array and finding the cell with value 1
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                tr = i;
                tc = j;
            }
        }
    }
    
    // Calculating the Manhattan distance from the center (3, 3)
    if (tr > 2)
    {
        tr = tr - 2;
    }
    else
    {
        tr = 2 - tr;
    }
    
    if (tc > 2)
    {
        tc = tc - 2;
    }
    else
    {
        tc = 2 - tc;
    }
    
    // Printing the Manhattan distance
    cout << tr + tc << endl;

    return 0;
}
