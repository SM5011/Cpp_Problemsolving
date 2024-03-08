#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
    int a,b,c,max=0,min=0;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        max =a;
    }
    else if(b>a&&b>c){
        max=b;
    }
    else{
        max=c;
    }
    if(a<b&&a<c){
        min=a;
    }
    else if(b<a&&b<c){
        min=b;
    }
    else{
        min-c;
    }
    if(a!=max && a!=min){
        cout<<a<<endl;
    }
    else if(b!=max && b!=min){
        cout<<b<<endl;
    }
    else{
         cout<<c<<endl;
    }

    }
    
}