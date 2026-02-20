#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter your data :";
    int n;
    cin>> n;
    cout<<n<<" ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i] ;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

