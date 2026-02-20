#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];

    int left=0,right=n-1;
    int sereja=0,dima=0;
    bool turn=true;

    while(left<=right){
        int pick;
        if(a[left]>a[right]){
            pick=a[left];
            left++;
        }else{
            pick=a[right];
            right--;
        }
        if(turn){
            sereja +=pick;
        }else{
            dima +=pick;
        }
        turn=!turn;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;

}