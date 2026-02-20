#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<< (s[0]-'1')*10 + s.size()*(s.size()+1)/2<<endl;
	}
}