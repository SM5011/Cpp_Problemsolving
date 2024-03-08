#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c=0;
    while (t--)
    {
        cin>>a>>b;
        if(a+1<b){
            c++;
        }
    }
    cout<<c<<endl;
    
}