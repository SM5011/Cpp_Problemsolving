#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};    
    int x,c=0;
    cin>>x;
    for(int i=4;i>=0;i--){
        while (x>=a[i])
        {
            c++;
            x=x-a[i];            
        }
        
    }
    cout<<c<<endl;
}