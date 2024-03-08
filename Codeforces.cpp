#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        char a;
        cin>>a;
        string s= "codeforces";
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==a){
                c++;
            }
            
        }
        if(c==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
}