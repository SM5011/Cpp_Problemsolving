#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l = s.length();
    for(int i=0;i<l;i++){
        s[i] = tolower(s[i]);
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){
             cout<<"."<<s[i];
        }
        else{
           
            continue;
        }
    }
}