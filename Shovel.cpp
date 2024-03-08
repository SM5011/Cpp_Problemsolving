#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r,c=0,m=0;
    cin>>k>>r;
    while (m%10 != r)
    {
        m+=k;
        c++;
        if(m%10 == 0){
            break;
        }
    }
    cout<<c<<endl;    
}