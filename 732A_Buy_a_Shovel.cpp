#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int n=1;
    while(true){
        int total_price=n*k;
        
        if(total_price%10==0 || total_price%10==r){
            cout<<n<<endl;
            break;
        }
        n++;
    }
    return 0;
}