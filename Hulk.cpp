#include<iostream>
using namespace std;
int main(){
    string s1 ="I hate ";
    string s2 ="that I love ";
    string s3 = "that I hate ";
    string s4 ="it";
    int n;
    cin>>n;
    if(n==1){
        s1 = s1+s4;
        cout<<s1;
    }
    else{
        for(int i=1;i<n;i++){
        if(i%2 != 0){
            s1 = s1+s2;
        }
        else{
            s1 = s1+s3;
        }
        if(i==(n-1)){
            s1 = s1+s4;
        }
    }
    cout<<s1;
    }
}