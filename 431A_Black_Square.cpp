#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int total=0;

    for(size_t i=0;i<s.size();i++){
        int index=s[i]-'1';//convert char'1'-'4'
        total+=a[index];
    }
    cout<<total<<endl;
    return 0;
}