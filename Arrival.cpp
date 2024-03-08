#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int maxp=0,minp=0;
    int max= INT16_MIN, min = INT16_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(max<=a[i]){
            max = a[i];
            maxp =i;
            
        }
        else if (min>=a[i])
        {
            min = a[i];
            minp = i;
        }
        
    }
    cout<<max<<min<<maxp<<minp<<endl;
    if(maxp<minp){
        int r = maxp + (n-minp) - 1;
        cout<<r<<endl;
    }
    else{
        int r = maxp + (n-minp);
        cout<<r<<endl;
    }
}