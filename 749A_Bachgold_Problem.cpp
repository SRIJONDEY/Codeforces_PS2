#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    if(n%2==0){
        //even case
        cout<< n/2<< "\n";
        for(int i=0;i<n/2;i++){
            cout<< 2 << " ";
        }
    }else{
        //odd case
        cout<< (n-3)/2 + 1 <<"\n";
        cout<< 3 <<" ";
        for(int i=0;i<(n-3)/2;i++){
            cout<< 2 <<" ";
        }
    }
    return 0;
}
