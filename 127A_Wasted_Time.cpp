#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>> n >> k;

    double x1,y1,x2,y2;
    cin>>x1>>y1;
    double len=0;

    for(int i=1;i<n;i++){
        cin>>x2>>y2;
        len+=hypot(x2-x1,y2-y1);
        x1=x2;
        y1=y2;
    }
    cout<<fixed <<setprecision(9)<< (len*k)/50.0 <<"\n";
}