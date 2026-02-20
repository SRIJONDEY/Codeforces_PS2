#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    // maximum number of Coders
    cout<< (n*n +1)/2 <<"\n";
    // print board
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)%2 == 0)
            cout <<'C';
            else
            cout<< '.';
        }
        cout<<"\n";
    }
    return 0;
}