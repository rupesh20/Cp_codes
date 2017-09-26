#include<bits/stdc++.h>
using namespace std;

	int main(){
		int n,i,j,k;
			cin>>n;

			  bool arr[n+1];
			  memset(arr,true,sizeof(arr));
			  	for(i=2;i*i<=n;i++){
			  		if(arr[i]==true){
			  			for(j=i*2;j<=n;j=j+i){
			  				arr[j]=false;}}
			  	}
			  	for(i=2;i<n;i++){
			  		if(arr[i]==true){
			  			cout<<i<<endl;}
			  	}
			return 0;
	}

