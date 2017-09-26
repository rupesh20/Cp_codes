#include<bits/stdc++.h>
using namespace std;

int arr[10001];


int main(){
	int t,c=0;
	cin>>t;
	while(--t){
		memset(arr,0,sizeof(arr));
		int k;
			while(--k){
				int t1,t2;
				cin>>t1>>t2;
				if(arr[t1]==0){
					arr[t1]=1;
				}
				if(arr[t2]==0){
					arr[t2]=1;
				}
			}
			for(int j=0;j<=10000;++j){
				if(arr[j]){
					c++;
				}
			}
			cout<<c<<endl;
	}
	return 0;
}
