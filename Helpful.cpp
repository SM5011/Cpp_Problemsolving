#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int l = s.length();
    int a[l], j = 0, num = 0;
    
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '+')
        {
            a[j++] = num; 
            num = 0; 
        }
        else
        {
            num = num * 10 + (s[i] - '0'); 
        }
    }
    a[j++] = num;
    
    
    sort(a,a+j);
    for (int i = 0; i < j; i++)
    {
        if(i != j-1){
            cout<<a[i]<<'+';
        }
        else{
            cout<<a[i];
        }
    }

    
    return 0;
}
