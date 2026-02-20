#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int n;
    cin>>n;
    string best = ""; //store best match

    for(int i=0;i<n;i++){
        string page;
        cin>>page;

        // check if page start with s
        if(page.substr(0,s.size()) == s){
            if(best == "" || page < best){
                best = page;
            }
        }

    }
    if(best == ""){
        cout<<s<<"\n";
    }else{
        cout<<best<<"\n";
    }
    return 0;
}