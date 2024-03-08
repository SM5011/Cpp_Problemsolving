#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int p;
        for(int i=2;i<100;i++){
            if(n%i==0){
                p=n%i;
                break;
            }
        }
        int q=n/p;
        while ()
        {
            /* code */
        }
        
        cout<<min<<" "<<max<<endl;
        cout<<max-min<<endl;
    }
    
}