#include<bits/stdc++.h>
using namespace std;
void solve(){
    int N;
    cin>>N;
    if(N == 1 || N == 3){
        cout<< -1 << "\n";
    }else if(N%2 == 0){
        cout<< string(N-2,'3')+ "66" << "\n";
    }else{
        cout<< string(N-5, '3') + "36366" << "\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--){
    solve();
    }
    return 0;
}