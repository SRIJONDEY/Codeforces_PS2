#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    char current='a';
    int totalRotation=0;

    for(char next : s){
        int diff = abs(current - next);
        totalRotation += min(diff,26 - diff);
        current = next;
    }
    cout<< totalRotation<< endl;
    return 0;
}