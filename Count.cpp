#include <iostream>
#include <string>

using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int c=0;

    if(x==s && n==m){
        cout<<"0"<<endl;
        return;
    }
    while (n<m)
    {
       x+=x;
       c++;
       n+=n;
    }
    if(x.find(s) != string::npos){
        cout<<c<<endl;
        return;
    }
    x+=x;
    if(x.find(s) != string::npos){
        cout<<c+1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    

}
int main() {
    int t;
    cin>>t;
    while(t--){
    solve();
    }

    return 0;
}
