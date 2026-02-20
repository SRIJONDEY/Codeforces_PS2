#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long odd_count=(n+1)/2;
    if(k<=odd_count){
        cout<< 2*k-1;
    }else
    {
        long long position_even=k-odd_count;
        cout<<2*position_even;
    }
    return 0;
}