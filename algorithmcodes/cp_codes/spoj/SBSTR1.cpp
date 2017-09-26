#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	vector<int> v;
	while(t--){
		int i=0;
		while(cin>>v[i]){
			i++;
			sum+=v[i];
		}
		if(n%i==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		v.pop();
	}
	return 0;
}
