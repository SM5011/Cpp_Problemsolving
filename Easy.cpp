#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            cout<<"HARD"<<endl;
            exit(0);
            c++;
        }
    }
    if(c==0){
         cout<<"EASY"<<endl;
    }
}