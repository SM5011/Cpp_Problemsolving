#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=0;
    for(int i=1;i<=n;i++){
        if(i%3 == 0){
            j++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<j<<endl;
}