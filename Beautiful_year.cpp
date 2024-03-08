#include<iostream>
using namespace std;
int main(){
    int y;
    int max= INT16_MAX;
    cin>>y;
    int a[4]={0};
    int j=0;
    for(int i=y+1;i<max;i++){
        int p=i,j=0;
        while (p>0)
        {
            a[j++]=p%10;
            p=p/10;
        }
        if(a[0]==a[1]||a[1]==a[2]||a[2]==a[3]||a[0]==a[3]||a[0]==a[2]||a[1]==a[3]){
            continue;
        }
        else{
            cout<<i<<endl;
            break;
        }
        

    }
}