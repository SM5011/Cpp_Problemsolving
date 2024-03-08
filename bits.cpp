#include<iostream>
using namespace std;
int main(){
    int x=0,n;
    string s;
    cin>>n;
    while (n--)
    {   
        cin>>s;
        if(s[1]=='+'){
            x++;
        }
        else if (s[1]=='-')
        {
           x--;
        }
        
    }
    cout<<x<<endl;
    
}