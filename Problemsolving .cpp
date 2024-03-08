#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cn =0;
    for(char c='A';c<= 'Z';c++){
        for(int i=0;i<n;i++){
            if(c == s[i]){
                cn++;
            }
        }
    }
    cout<<cn<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }    
}