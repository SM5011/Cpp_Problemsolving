#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       if(n%7 == 0){
        cout<<n<<endl;
       }
       else{
        int r=n/7;
       cout<<(r+1)*7<<endl;
       }
    }
    
}