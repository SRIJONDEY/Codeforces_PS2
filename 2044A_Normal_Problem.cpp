#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        reverse(n.begin(),n.end());
        for( char &c : n){
            if(c=='p') c = 'q';
            else if(c == 'q') c = 'p';
        }
        cout<< n <<"\n";
    }
    return 0;
}