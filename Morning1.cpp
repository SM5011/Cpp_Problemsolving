#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    vector<int> b;
    for (int i = 0; i < 4; i++)
    {
        b.push_back(a[i] - '0');
    }
    int c = 0;
    int temp =1;
    for (auto i = b.begin(); i != b.end(); ++i)
    {
        if(*i == temp){
            c++;
            temp = *i;
            continue;
        }
        else if(temp > *i && temp != 0){
            c+=(temp-*i);
            c++;
            temp=*i;
            continue;
        }
        else if(temp < *i && temp != 0){
            c+=(*i-temp);
            c++;
            temp=*i;
            continue;
        }
        else if(*i == 0){
            c+=(10-temp);
            c++;
            temp=*i;
            continue;
        }
        else if(temp==0){
            c+=((*i-temp)+10);
            c++;
            temp=*i;
            continue;
        }
    }
    cout<<c;

}